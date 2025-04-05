#include <iostream>
#include <vector>
#include <tuple>

const int WIDTH = 40;  // Ширина координатной сетки
const int HEIGHT = 20; // Высота координатной сетки

void draw3DCoordinateSystem(const std::vector<std::tuple<int, int, int>>& points) {
    // Создаем двумерный вектор для хранения символов
    std::vector<std::vector<char>> grid(HEIGHT, std::vector<char>(WIDTH, ' '));

    // Рисуем оси
    for (int i = 0; i < WIDTH; ++i) {
        grid[HEIGHT / 2][i] = '-'; // Горизонтальная ось X
    }
    for (int i = 0; i < HEIGHT; ++i) {
        grid[i][WIDTH / 2] = '|'; // Вертикальная ось Y
    }

    // Отмечаем точки на графике
    for (const auto& point : points) {
        int x = std::get<0>(point);
        int y = std::get<1>(point);
        int z = std::get<2>(point);

        // Проекция точки (x, y, z) на 2D-плоскость
        int projectedX = x - z + WIDTH / 2; // Простая проекция
        int projectedY = y - z + HEIGHT / 2; // Простая проекция

        // Проверяем, попадает ли точка в границы сетки
        if (projectedX >= 0 && projectedX < WIDTH && projectedY >= 0 && projectedY < HEIGHT) {
            grid[projectedY][projectedX] = '*'; // Отмечаем точку
        }
    }

    // Выводим сетку в консоль
    for (const auto& row : grid) {
        for (char cell : row) {
            std::cout << cell;
        }
        std::cout << '\n';
    }
}

int main() {
    // Пример точек для отображения
    std::vector<std::tuple<int, int, int>> points = {
        {0, 0, 0}, {5, 5, 5}, {-5, -5, -5}, {10, 10, 0}, {-10, -10, -5}, {3, -3, 1}, {-3, 3, -1}
    };

    draw3DCoordinateSystem(points);

    return 0;
}
