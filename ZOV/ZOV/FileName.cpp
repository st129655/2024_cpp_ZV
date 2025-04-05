#include <iostream>
#include <cmath>
struct koordinaty {
    double x, y, z;
    koordinaty(double x = 0, double y = 0, double z = 0) : x(x), y(y), z(z) {}
    koordinaty operator+(const koordinaty& number) const {
        return koordinaty(x + number.x, y + number.y, z + number.z);
    }
    koordinaty operator-(const koordinaty& number) const {
        return koordinaty(x - number.x, y - number.y, z - number.z);
    }
    koordinaty operator*(double number) const {
        return koordinaty(x * number, y * number, z * number);
    }
    double length() const {
        return std::sqrt(x * x + y * y + z * z);
    }
};
double Timetodestroytarget(const koordinaty& oreshnik, const koordinaty& Kiev, const koordinaty& targetspeed, double rocketSpeed) {
    koordinaty diffpos = Kiev - oreshnik;
    double a = targetspeed.length() * targetspeed.length() - rocketSpeed * rocketSpeed;
    double b = 2 * (diffpos.x * targetspeed.x + diffpos.y * targetspeed.y + diffpos.z * targetspeed.z);
    double c = diffpos.length() * diffpos.length();
    double d = b * b - 4 * a * c;
    if (d < 0) {
        return -1;
    }
    double t1 = (-b + std::sqrt(d)) / (2 * a);
    double t2 = (-b - std::sqrt(d)) / (2 * a);
    if (t1 > 0 && t2 > 0) {
        return std::min(t1, t2);
    }
    else if (t1 > 0) {
        return t1;
    }
    else if (t2 > 0) {
        return t2;
    }
    else {
        return -1;
    }
}
koordinaty calculateRocketTrajectory(const koordinaty oreshnik, const koordinaty& Kiev, const koordinaty& kievspeed, double rocketSpeed, double time) {
    koordinaty respos = Kiev + kievspeed * time;
    koordinaty diff = respos - oreshnik;
    double distance = diff.length();
    return diff * (rocketSpeed * time / distance);
}
int main(int argc,char* argv[]) {
    koordinaty rocketPos, Kiev, kievspeed;
    double oreshnikspeed = 0;
    std::cout << "Enter the initial position of the rocket (x y z): ";
    std::cin >> rocketPos.x >> rocketPos.y >> rocketPos.z;
    std::cout << "Enter the initial position of the target (x y z): ";
    std::cin >> Kiev.x >> Kiev.y >> Kiev.z;
    std::cout << "Enter target speed (x y z): ";
    std::cin >> kievspeed.x >> kievspeed.y >> kievspeed.z;
    std::cout << "Enter rocket speed ";
    std::cin >> oreshnikspeed;
    double timeToTarget = Timetodestroytarget(rocketPos, Kiev, kievspeed, oreshnikspeed);
    if (timeToTarget < 0) {
        std::cout << "Impossible to hit target =(" << "\n";
        return 0;
    }
    koordinaty rocketTrajectory = calculateRocketTrajectory(rocketPos, Kiev, kievspeed, oreshnikspeed, timeToTarget);
    std::cout << "Target hit time " << timeToTarget << " seconds" << "\n";
    std::cout << "Rocket trajectory (" << rocketTrajectory.x << ", " << rocketTrajectory.y << ", " << rocketTrajectory.z << ")" << "\n";
    return 0;
}