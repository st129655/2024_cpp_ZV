#include<iostream>
#define _CRT_SECURE_NO_WARNINGS
#include"Matrix.h"
int main(int argc, char* argv[]) {
	setlocale(LC_ALL, "Russian");// РОССИЯ ВПЕРЕД!!!
	Matrix matr1(3);
	Matrix matr2(3);
	for (int i = 0; i < matr1.getR(); ++i)
	{
		{
		for (int j = 0; j < matr1.getC(); ++j)
			matr1.set(i, j, 3 * i + j + 1);
		}
	}
	for (int i = 0; i < matr2.getR(); ++i)
	{
		for (int j = 0; j < matr2.getC(); ++j)
		{
			matr2.set(i, j, 4 * i + 2);
		}
	}

	matr1.print(std::cout);
	Matrix matr3 = transpose(matr1);
	matr3.print(std::cout);
	Matrix mult(Matrix matr1, Matrix matr2);
	Matrix transpose(Matrix matr1);//реализация функции транспонирования с выводом
	matr1.print(std::cout);
	Matrix matr4 = add(matr3, matr1);//  реализация сложения матриц с выводом
	matr4.print(std::cout);
	Matrix matr5 = subtr(matr1, matr1); //реализация вычитания мариц
	matr5.print(std::cout);
	matr1.set(2, 2, 6);
	Matrix matr6 = reverse(matr1);// реализация получения обратной матрицы
	matr1.print(std::cout);
	matr6.print(std::cout);
	Matrix B(3, 1); 
	for (int i = 0; i < B.getR(); ++i) // zov zov zov zov zov zov zov zov zov zov zov zov 
	{
		{
			for (int j = 0; j < B.getC(); ++j) // задаю вектор столбец числами и вывожу его
				B.set(i, j, 2);
		}
	}
	B.print(std::cout);
	Matrix matr7 = solve(matr1, B); // получаю вектор столбец с решением и вывожу его
	matr7.print(std::cout);
	return 0;
}