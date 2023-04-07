#include"Constants.h"

template<typename T> void Sort(T arr[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[j] < arr[i])
			{
				T tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}
template<typename T> void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (arr[i][j] > arr[k][l])
					{
						T tmp = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = tmp;
					}
				}
			}
		}
	}
}