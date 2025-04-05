#include <iostream>
#include <vector>
#include <tuple>

const int WIDTH = 40;  // ������ ������������ �����
const int HEIGHT = 20; // ������ ������������ �����

void draw3DCoordinateSystem(const std::vector<std::tuple<int, int, int>>& points) {
    // ������� ��������� ������ ��� �������� ��������
    std::vector<std::vector<char>> grid(HEIGHT, std::vector<char>(WIDTH, ' '));

    // ������ ���
    for (int i = 0; i < WIDTH; ++i) {
        grid[HEIGHT / 2][i] = '-'; // �������������� ��� X
    }
    for (int i = 0; i < HEIGHT; ++i) {
        grid[i][WIDTH / 2] = '|'; // ������������ ��� Y
    }

    // �������� ����� �� �������
    for (const auto& point : points) {
        int x = std::get<0>(point);
        int y = std::get<1>(point);
        int z = std::get<2>(point);

        // �������� ����� (x, y, z) �� 2D-���������
        int projectedX = x - z + WIDTH / 2; // ������� ��������
        int projectedY = y - z + HEIGHT / 2; // ������� ��������

        // ���������, �������� �� ����� � ������� �����
        if (projectedX >= 0 && projectedX < WIDTH && projectedY >= 0 && projectedY < HEIGHT) {
            grid[projectedY][projectedX] = '*'; // �������� �����
        }
    }

    // ������� ����� � �������
    for (const auto& row : grid) {
        for (char cell : row) {
            std::cout << cell;
        }
        std::cout << '\n';
    }
}

int main() {
    // ������ ����� ��� �����������
    std::vector<std::tuple<int, int, int>> points = {
        {0, 0, 0}, {5, 5, 5}, {-5, -5, -5}, {10, 10, 0}, {-10, -10, -5}, {3, -3, 1}, {-3, 3, -1}
    };

    draw3DCoordinateSystem(points);

    return 0;
}
