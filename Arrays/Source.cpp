#include<iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 4;

#define MAX 26
#define MIN 65

//Перегрузка заполнения массивов
void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS);
//Перегрузка вывода массивов
void Print(const int arr[], const int n);
void Print(const double arr[], const int n);
void Print(const int arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(const double arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(const char arr[ROWS][COLS], const int ROWS, const int COLS);
//Перегрузка суммы элементов массива
int Sum(const int arr[], const int n);
int Sum(const int arr[ROWS][COLS], const int ROWS, const int COLS);
double Sum(const double arr[ROWS][COLS], const int ROWS, const int COLS);
char Sum(const char arr[ROWS][COLS], const int ROWS, const int COLS);
//Перегрузка среднего арифметического элементов массива
double Avg(const int arr[], const int n);
double Avg(const int arr[ROWS][COLS], const int ROWS, const int COLS);
double Avg(const double arr[ROWS][COLS], const int ROWS, const int COLS);
char Avg(const char arr[ROWS][COLS], const int ROWS, const int COLS);
//Перегрузка минимальных значений
int minValueIn(const int arr[], const int n);
int minValueIn(const int arr[ROWS][COLS], const int ROWS, const int COLS);
double minValueIn(const double arr[ROWS][COLS], const int ROWS, const int COLS);
char minValueIn(const char arr[ROWS][COLS], const int ROWS, const int COLS);
//Перегрузка максмальных значений
int maxValueIn(const int arr[], const int n);
int maxValueIn(const int arr[ROWS][COLS], const int ROWS, const int COLS);
double maxValueIn(const double arr[ROWS][COLS], const int ROWS, const int COLS);
char maxValueIn(const char arr[ROWS][COLS], const int ROWS, const int COLS);
//Перегрузка для движения
void shiftLeft(int arr[], const int n, int number_of_shifts);
void shiftRight(int arr[], const int n, int number_of_shifts);
void shiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);
void shiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);
void shiftLeft(double arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);
void shiftRight(double arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);
void shiftLeft(char arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);
void shiftRight(char arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);
//Перегрузка сортировки
void Sort(int arr[], const int n);
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS);
void Sort(double arr[ROWS][COLS], const int ROWS, const int COLS);
void Sort(char arr[ROWS][COLS], const int ROWS, const int COLS);
//Перегрузка уникальных значений
void UniqueRand(int arr[], const int n);
void UniqueRand(int arr[ROWS][COLS], const int ROWS, const int COLS);
void UniqueRand(double arr[ROWS][COLS], const int ROWS, const int COLS);
void UniqueRand(char arr[ROWS][COLS], const int ROWS, const int COLS);
//Перегрузка повторений
void Search(int arr[], const int n);
void Search(int arr[ROWS][COLS], const int ROWS, const int COLS);
void Search(double arr[ROWS][COLS], const int ROWS, const int COLS);
void Search(char arr[ROWS][COLS], const int ROWS, const int COLS);

//#define ARRAYS_1
#define ARRAYS_2

void main()
{
	setlocale(LC_ALL, "");

#ifdef ARRAYS_1

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

	/int number_of_shifts;
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	shiftLeft(arr, n, number_of_shifts);
	Print(arr, n);
	shiftRight(arr, n, number_of_shifts);
	Print(arr, n);

	const int SIZE = 8;
	double d_arr[SIZE];
	FillRand(d_arr, SIZE);
	Print(d_arr, SIZE);

#endif

#ifdef ARRAYS_2
	
	int number_of_shifts = 5;
	int i_arr[ROWS][COLS];
	double d_arr[ROWS][COLS];
	char c_arr[ROWS][COLS];

	FillRand(i_arr, ROWS, COLS);
	FillRand(d_arr, ROWS, COLS);
	FillRand(c_arr, ROWS, COLS);
	cout << "Сгенерированные массивы" << endl;
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
void Print(const int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Print(const double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

int Sum(const int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Avg(const int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
int minValueIn(const int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
int maxValueIn(const int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}

void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				arr[i] ^= arr[j];
				arr[j] ^= arr[i];
				arr[i] ^= arr[j];
			}
		}
	}
}

void shiftLeft(int arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
void shiftRight(int arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
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
void Search(int arr[], const int n)
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

/////  Перегрузка функция для матриц int, double, char
//Заполнение
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
//Вывод
void Print(const int arr[ROWS][COLS], const int ROWS, const int COLS)
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
void Print(const double arr[ROWS][COLS], const int ROWS, const int COLS)
{
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
}
void Print(const char arr[ROWS][COLS], const int ROWS, const int COLS)
{
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
}
//Сумма
int Sum(const int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}
double Sum(const double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}
char Sum(const char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}
//Среднее арифметическое
double Avg(const int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS*COLS);
}
double Avg(const double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS*COLS);
}
char Avg(const char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS*COLS);
}
//Минимальное значение
int minValueIn(const int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min)min = arr[i][j];
		}
	}
	return min;
}
double minValueIn(const double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min)min = arr[i][j];
		}
	}
	return min;
}
char minValueIn(const char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min)min = arr[i][j];
		}
	}
	return min;
}
//Максимаьное значение
int maxValueIn(const int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max)max = arr[i][j];
		}
	}
	return max;
}
double maxValueIn(const double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max)max = arr[i][j];
		}
	}
	return max;
}
char maxValueIn(const char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > max)max = arr[i][j];
		}
	}
	return max;
}
//Движение массива
void shiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0][0];
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				arr[i][j] = arr[i][j+1];
			}
		}
		arr[ROWS-1][COLS-1] = buffer;
	}
}
void shiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	shiftLeft(arr, ROWS, COLS, ROWS * COLS - number_of_shifts);
}
void shiftLeft(double arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		double buffer = arr[0][0];
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				arr[i][j] = arr[i][j + 1];
			}
		}
		arr[ROWS - 1][COLS - 1] = buffer;
	}
}
void shiftRight(double arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	shiftLeft(arr, ROWS, COLS, ROWS * COLS - number_of_shifts);
}
void shiftLeft(char arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		char buffer = arr[0][0];
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				arr[i][j] = arr[i][j + 1];
			}
		}
		arr[ROWS-1][COLS - 1] = buffer;
	}
}
void shiftRight(char arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	shiftLeft(arr, ROWS, COLS, ROWS * COLS - number_of_shifts);
}
//Сортировка
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	{
		int tmp, i, j;
		bool end = true;
		while (end)
		{
			end = false;
			i = 0; j = 0;
			for (int n = 0; n < ROWS; n++)
			{
				for (int m = (n ? 0 : 1); m < COLS; m++)
				{
					if (arr[i][j] > arr[n][m])
					{
						tmp = arr[i][j];
						arr[i][j] = arr[n][m];
						arr[n][m] = tmp;
						end = true;
					}
					i = n;
					j = m;
				}
			}
		}
	}
}
void Sort(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	{
		int i, j;
		double tmp;
		bool end = true;
		while (end)
		{
			end = false;
			i = 0; j = 0;
			for (int n = 0; n < ROWS; n++)
			{
				for (int m = (n ? 0 : 1); m < COLS; m++)
				{
					if (arr[i][j] > arr[n][m])
					{
						tmp = arr[i][j];
						arr[i][j] = arr[n][m];
						arr[n][m] = tmp;
						end = true;
					}
					i = n;
					j = m;
				}
			}
		}
	}
}
void Sort(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	{
		int tmp, i, j;
		bool end = true;
		while (end)
		{
			end = false;
			i = 0; j = 0;
			for (int n = 0; n < ROWS; n++)
			{
				for (int m = (n ? 0 : 1); m < COLS; m++)
				{
					if (arr[i][j] > arr[n][m])
					{
						tmp = arr[i][j];
						arr[i][j] = arr[n][m];
						arr[n][m] = tmp;
						end = true;
					}
					i = n;
					j = m;
				}
			}
		}
	}
}
//Уникальные значения
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
void Search(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			bool met_before = false;
			for (int n = 0; n < ROWS; n++)
			{
				for (int m = j+1; m < COLS; m++)
				{
					if (arr[i][j]==arr[n][m])
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
void Search(double arr[ROWS][COLS], const int ROWS, const int COLS)
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
void Search(char arr[ROWS][COLS], const int ROWS, const int COLS)
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