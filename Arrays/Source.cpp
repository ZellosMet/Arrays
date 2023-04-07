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

//Шаблон вывода
template<typename T> void Print(T const arr[], const int size);
template<typename T> void Print(T const arr[ROWS][COLS], const int ROWS, const int COLS);

//Шаблон суммы элементов массива
template<typename T> T Sum(T const arr[], const int size);
template<typename T> T Sum(T const arr[ROWS][COLS], const int ROWS, const int COLS);

//Шаблон среднего арифметического элементов массива
template<typename T> double Avg(T const arr[], const int size);
template<typename T>double Avg(const T arr[ROWS][COLS], const int ROWS, const int COLS);

//Шаблон минимальных значений
template<typename T> T minValueIn(T const arr[], const int size);
template<typename T> T minValueIn(const T arr[ROWS][COLS], const int ROWS, const int COLS);

//Шаблон максмальных значений
template<typename T> T maxValueIn(T const arr[], const int size);
template<typename T> T maxValueIn(const T arr[ROWS][COLS], const int ROWS, const int COLS);

//Шаблон для движения
template<typename T> void shiftLeft(T arr[], const int n, int number_of_shifts);
template<typename T> void shiftRight(T arr[], const int n, int number_of_shifts);
template<typename T> void shiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);
template<typename T> void shiftRight(T arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);

//Шаблон сортировки
template<typename T> void Sort(T arr[], const int size);
template<typename T> void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS);

//Перегрузка уникальных значений
void UniqueRand(int arr[], const int size);
void UniqueRand(int arr[ROWS][COLS], const int ROWS, const int COLS);
void UniqueRand(double arr[ROWS][COLS], const int ROWS, const int COLS);
void UniqueRand(char arr[ROWS][COLS], const int ROWS, const int COLS);

//Шаблон повторений
template<typename T> void Search(T arr[], const int n);
template<typename T> void Search(T arr[ROWS][COLS], const int ROWS, const int COLS);

#define ARRAYS_1
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

	int line_number_of_shifts;
	cout << "Введите количество сдвигов: "; cin >> line_number_of_shifts;
	shiftLeft(arr, n, line_number_of_shifts);
	Print(arr, n);
	shiftRight(arr, n, line_number_of_shifts);
	Print(arr, n);

	const int SIZE = 8;
	double line_d_arr[SIZE];
	FillRand(line_d_arr, SIZE);
	Print(line_d_arr, SIZE);

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

//Заполнение
void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
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

//Сумма
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

//Среднее арифметическое
template<typename T> double Avg(T const arr[], const int size)
{
	return (double)Sum(arr, size) / size;
}
template<typename T>double Avg(const T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS*COLS);
}

//Минимальное значение
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

//Максимаьное значение
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

//Движение массива
template<typename T> void shiftLeft(T arr[], const int n, int number_of_shifts)
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
template<typename T> void shiftRight(T arr[], const int n, int number_of_shifts)
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
template<typename T> void shiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
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
template<typename T> void shiftRight(T arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	shiftLeft(arr, ROWS, COLS, ROWS * COLS - number_of_shifts);
}

//Сортировка
template<typename T> void Sort(T arr[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
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
template<typename T> void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS)
{	
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j+1 : 0; l < COLS; l++)
				{
					if (arr[i][j]>arr[k][l])
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

//Уникальные значения
void UniqueRand(int arr[], const int size)
{
	for (int i = 0; i < size; i++)
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
//Поиск повторений
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