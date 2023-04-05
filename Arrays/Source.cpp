#include"stdafx.h"
#include"constants.h"
#include"FillRand.h"
#include"Print.h"
#include"Statistics.h"
#include"Shift.h"
#include"Sort.h"
#include"Search.h"

#define ARRAYS_1
#define ARRAYS_2

void main()
{
	setlocale(LC_ALL, "");

#ifdef ARRAYS_1

	cout << "\---ЛИНЕЙКИ---" << endl;

	const int n = 10;
	int arr[n] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	FillRand(arr, n, 0, 5);
	UniqueRand(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(arr, n) << endl;
	cout << "Минимальное значение в массиве:  " << minValueIn(arr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(arr, n) << endl;
	Search(arr, n);
	Sort(arr, n);
	Print(arr, n);

	int number_of_shifts_line;
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts_line;
	shiftLeft(arr, n, number_of_shifts_line);
	Print(arr, n);
	shiftRight(arr, n, number_of_shifts_line);
	Print(arr, n);

	const int SIZE = 8;
	double d_arr_line[SIZE];
	FillRand(d_arr_line, SIZE);
	Print(d_arr_line, SIZE);

#endif

#ifdef ARRAYS_2

	cout << "\n---МАТРИЦИ---";
	
	int number_of_shifts = 5;
	int i_arr[ROWS][COLS];
	double d_arr[ROWS][COLS];
	char c_arr[ROWS][COLS];

	FillRand(i_arr, ROWS, COLS);
	FillRand(d_arr, ROWS, COLS);
	FillRand(c_arr, ROWS, COLS);
	cout << "\nСгенерированные массивы" << endl;
	Print(i_arr, ROWS, COLS); cout << endl;
	Print(d_arr, ROWS, COLS); cout << endl;
	Print(c_arr, ROWS, COLS); cout << endl;

	cout << "Сумма целых элементов матрицы: " << Sum(i_arr, ROWS, COLS) << endl;
	cout << "Сумма вещественных элементов матрицы: " << Sum(d_arr, ROWS, COLS) << endl;
	cout << "Сумма символьных элементов матрицы: " << Sum(c_arr, ROWS, COLS) << endl << endl;
	
	cout << "Среднее арифметическое целых элементов матрицы: " << Avg(i_arr, ROWS, COLS) << endl;
	cout << "Среднее арифметическое вещественных элементов матрицы: " << Avg(d_arr, ROWS, COLS) << endl;
	cout << "Среднее арифметическое символьных элементов матрицы: " << Avg(c_arr, ROWS, COLS) << endl << endl;

	cout << "Минимальное целых элементов матрицы: " << minValueIn(i_arr, ROWS, COLS) << endl;
	cout << "Минимальное арифметическое вещественных элементов матрицы: " << minValueIn(d_arr, ROWS, COLS) << endl;
	cout << "Минимальное арифметическое символьных элементов матрицы: " << minValueIn(c_arr, ROWS, COLS) << endl << endl;

	cout << "Максимальное целых элементов матрицы: " << maxValueIn(i_arr, ROWS, COLS) << endl;
	cout << "Максимальное арифметическое вещественных элементов матрицы: " << maxValueIn(d_arr, ROWS, COLS) << endl;
	cout << "Максимальное арифметическое символьных элементов матрицы: " << maxValueIn(c_arr, ROWS, COLS) << endl << endl;

	cout << "Движение матриц" << endl;
	shiftLeft(i_arr, ROWS, COLS, number_of_shifts);
	Print(i_arr, ROWS, COLS); cout << endl;
	shiftRight(i_arr, ROWS, COLS,number_of_shifts);
	Print(i_arr, ROWS, COLS); cout << endl;

	shiftLeft(d_arr, ROWS, COLS, number_of_shifts);
	Print(d_arr, ROWS, COLS); cout << endl;
	shiftRight(d_arr, ROWS, COLS, number_of_shifts);
	Print(d_arr, ROWS, COLS); cout << endl;

	shiftLeft(c_arr, ROWS, COLS, number_of_shifts);
	Print(c_arr, ROWS, COLS); cout << endl;
	shiftRight(c_arr, ROWS, COLS, number_of_shifts);
	Print(c_arr, ROWS, COLS); cout << endl;

	cout << "Сортировка матриц" << endl;
	Sort(i_arr, ROWS, COLS);
	Print(i_arr, ROWS, COLS); cout << endl;

	Sort(d_arr, ROWS, COLS);
	Print(d_arr, ROWS, COLS); cout << endl;

	Sort(c_arr, ROWS, COLS);
	Print(c_arr, ROWS, COLS); cout << endl;

	cout << "Поиск повторов в массиве" << endl;
	Search(i_arr, ROWS, COLS); cout << endl;
	Search(d_arr, ROWS, COLS); cout << endl;
	Search(c_arr, ROWS, COLS); cout << endl;
	
	cout << "Уникальная матрица" << endl;
	UniqueRand(i_arr, ROWS, COLS);
	Print(i_arr, ROWS, COLS); cout << endl;

	UniqueRand(d_arr, ROWS, COLS);
	Print(d_arr, ROWS, COLS); cout << endl;

	UniqueRand(c_arr, ROWS, COLS);
	Print(c_arr, ROWS, COLS); cout;
	
#endif 
}