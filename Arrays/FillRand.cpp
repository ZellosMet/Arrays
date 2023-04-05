#include"FillRand.h"

void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 15;
		}
	}
}
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 1000;
			arr[i][j] /= 100;
		}
	}
}
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = MIN + rand() % MAX;
		}
	}
}
void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}
void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10000;
		arr[i] /= 100;
	}
}

void UniqueRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int rnd;
	bool check = true;
	for (int n = 0; n < ROWS; n++)
	{
		for (int m = 0; m < COLS; )
		{
			check = true;
			rnd = rand() % 15;
			for (int x = 0; x < ROWS; x++)
			{
				for (int y = 0; y < COLS; y++)
				{
					if (arr[x][y] == rnd)check = false;
				}
			}
			if (check)
			{
				arr[n][m] = rnd;
				m++;
			}
		}
	}
}
void UniqueRand(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double rnd;
	bool check = true;
	for (int n = 0; n < ROWS; n++)
	{
		for (int m = 0; m < COLS; )
		{
			check = true;
			rnd = rand() % 1500;
			rnd /= 100;
			for (int x = 0; x < ROWS; x++)
			{
				for (int y = 0; y < COLS; y++)
				{
					if (arr[x][y] == rnd)check = false;
				}
			}
			if (check)
			{
				arr[n][m] = rnd;
				m++;
			}
		}
	}
}
void UniqueRand(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int rnd;
	bool check = true;
	for (int n = 0; n < ROWS; n++)
	{
		for (int m = 0; m < COLS; )
		{
			check = true;
			rnd = 65 + rand() % 26;
			for (int x = 0; x < ROWS; x++)
			{
				for (int y = 0; y < COLS; y++)
				{
					if (arr[x][y] == rnd)check = false;
				}
			}
			if (check)
			{
				arr[n][m] = rnd;
				m++;
			}
		}
	}
}
void UniqueRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10;
		for (int j = 0; j < i; j++)
		{
			if (arr[i] == arr[j])
			{
				i--;
				break;
			}
		}
	}
}