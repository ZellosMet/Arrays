#include<iostream>
#include<ctime>
using namespace std;

//#define ARRAYS_1
#define ARRAYS_2

const int ROW = 3;
const int COL = 4;

void Fill_Array(int arr[], int size); // Функция заполнения массива
void Fill_Array(int arr[ROW][COL], int row, int col);
void Show_Array(int arr[], int size); //Функция вывода массива
void Show_Array(int arr[ROW][COL], int row, int col);
double Array_Sum(int arr[], int size); //Функция подсчёт суммы элементов
int Array_Max(int arr[], int size); //Функция поиска максимального значения
int Array_Min(int arr[], int size); //Функция поиска минимального значения
double AVG(int arr[], const int n);
void Sort(int arr[], int n);

void main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));

#ifdef ARRAYS_1

	const int N = 5;  //задание размера статического массива
	int arr[N] = {}; //инициализация массива
	arr[2] = 123; //обращение к элементу массива на запись
	cout << arr[2] << endl; //обращение к массиву на чтение

	
	cout << "Введите элементы массива: ";
	for (int i = 0; i < N; i++)
	{
		cin >> 	arr[i];
	}
	
	for (int i = 0; i < N; i++)
	{
		cout << "[ " << arr[i] << " ] ";
	}
	
	cout << rand(); // Функция генерации случайных чисел

	cout << AVG(arr, N);	

	Fill_Array(arr, N);
	Show_Array(arr, N);
	Sort(arr, N);
	cout << endl;
	Show_Array(arr, N);

#endif 

#ifdef ARRAYS_2


	int i_arr_2[ROW][COL];
	Fill_Array(i_arr_2, ROW, COL);
	Show_Array(i_arr_2, ROW, COL);

#endif 
	
}

void Fill_Array(int arr[], int size)
{ 
	for (int i = 0; i < size; i++) arr[i] = rand() % 100;
}

void Fill_Array(int arr[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = rand() % 90+10;
		}
	}
}

void Show_Array(int arr[], int size)
{
	for (int i = 0; i < size; i++) cout << "[ " << arr[i] << " ] ";
}

void Show_Array(int arr[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << "[ " << arr[i][j] << " ] ";
		}
		cout << endl;
	}		
}

double Array_Sum( int arr[], int size)
{
	int sum = 0;
	for (int i = 1; i < size; i++) sum += arr[i];
	return sum;
}

int Array_Max(int arr[], int size)
{
	int max = arr[0];
	for (int i = 0; i < size; i++) if (max < arr[i]) max = arr[i];
	return max;
}

int Array_Min(int arr[], int size)
{
	int min = arr[0];
	for (int i = 0; i < size; i++) if (min > arr[i]) min = arr[i];
	return min;
}

double AVG(int arr[], const int n)
{
	return Array_Sum(arr, n) / n;
}

void Sort(int arr[], int n)
{
	int tmp;
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
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