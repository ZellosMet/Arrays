#include"stdafx.h"
#include"Constants.h"

template<typename T> void Search(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		bool met_before = false;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				met_before = true;
				break;
			}
		}
		if (met_before)continue;
		int count = 0;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		if (count)cout << "Значение " << arr[i] << " повторяетя " << count << " раз" << endl;
	}
}

template<typename T> void Search(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			bool met_before = false;
			for (int n = 0; n < ROWS; n++)
			{
				for (int m = j + 1; m < COLS; m++)
				{
					if (arr[i][j] == arr[n][m])
					{
						met_before = true;
						break;
					}
				}
				if (met_before) break;
			}

			if (met_before) continue;
			int count = -1;
			for (int n = 0; n < ROWS; n++)
			{
				for (int m = 0; m < COLS; m++)
				{
					if (arr[i][j] == arr[n][m]) count++;
				}
			}
			if (count)cout << "Значение " << arr[i][j] << " повторяетя " << count << " раз" << endl;
		}
	}
}