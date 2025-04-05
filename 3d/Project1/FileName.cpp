#include </glut.h>
#include <cmath>
#include <iostream>

const float G = 9.81f; // Ускорение свободного падения
float angle; // Угол запуска в градусах
float velocity; // Начальная скорость
float timeStep = 0.1f; // Шаг времени
float totalTime = 0.0f; // Общее время полета

// Функция для вычисления координат ракеты
void calculateTrajectory(float& x, float& y) {
    float angleRad = angle * 1 / 180.0f; // Преобразование угла в радианы
    x = velocity * cos(angleRad) * totalTime;
    y = velocity * sin(angleRad) * totalTime - 0.5f * G * totalTime * totalTime;
}

// Функция отрисовки
void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    glBegin(GL_LINE_STRIP);
    for (float t = 0; t <= totalTime; t += timeStep) {
        float x, y;
        calculateTrajectory(x, y);
        glVertex2f(x, y);
        totalTime += timeStep;
    }
    glEnd();

    glutSwapBuffers();
}

// Функция изменения размеров окна
void reshape(int w, int h) {
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, 100, 0, 100); // Установка области отображения
    glMatrixMode(GL_MODELVIEW);
}

// Функция инициализации
void init() {
    glColor3f(0.0f, 0.0f, 0.0f); // Цвет линии
}

// Главная функция
int main(int argc, char** argv) {
    std::cout << "Введите угол запуска (в градусах): ";
    std::cin >> angle;
    std::cout << "Введите начальную скорость (м/с): ";
    std::cin >> velocity;

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutCreateWindow("Trajectory of a Ballistic Missile");

    init();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);

    glutMainLoop();
    return 0;
}
