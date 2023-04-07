#include"Constants.h"

template<typename T> T Sum(T const arr[], const int size)
{
	T sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	return sum;
}
template<typename T> T Sum(T const arr[ROWS][COLS], int ROWS, int COLS)
{
	T sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}

template<typename T> double Avg(T const arr[], const int size)
{
	return (double)Sum(arr, size) / size;
}
template<typename T>double Avg(const T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}

template<typename T> T minValueIn(T const arr[], const int size)
{
	T min = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
template<typename T> T minValueIn(const T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min)min = arr[i][j];
		}
	}
	return min;
}

template<typename T> T maxValueIn(T const arr[], const int size)
{
	T max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
template<typename T> T maxValueIn(const T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max)max = arr[i][j];
		}
	}
	return max;
}