#include"stdafx.h"
#include"Constants.h"

template<typename T> void Print(T const arr[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
template<typename T> void Print(T const arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << "[ " << arr[i][j] << " ] ";
		}
		cout << endl;
	}
}