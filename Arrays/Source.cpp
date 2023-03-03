#include<iostream>
#include<ctime>
using namespace std;

//#define LESSON
#define HOMEWORK

void Fill_Array(int arr[], int size);
double Array_Sum(int arr[], int size);
int Array_Max(int arr[], int size);
int Array_Min(int arr[], int size);

void main()
{

	setlocale(LC_ALL, "ru");
	srand(time(NULL));

#ifdef LESSON

	const int N = 5;  //задание размера статического массива
	int arr[N] = {1,2}; //инициализация массива
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

#endif 

#ifdef HOMEWORK

	const int SIZE = 10;
	int array[SIZE];

	Fill_Array(array, SIZE);

	cout << "Сгенерированные элементы массива:\n\n";
	for (int i = 0; i < SIZE; i++)
	{
		cout << "[ " << array[i] << " ] ";
	}

	cout << "\n\nСумма элементов массива = " << Array_Sum(array, SIZE) << endl;
	cout << "Среднее арифметическое элементов массивов = " << Array_Sum(array, SIZE)/SIZE << endl;
	cout << "Максимальный элемент массива = " << Array_Max(array, SIZE) << endl;
	cout << "Минимальный элемент массива = " << Array_Min(array, SIZE) << endl;

#endif 
}

void Fill_Array(int arr[], int size)
{ 
	for (int i = 0; i < size; i++) arr[i] = rand() % 100;
}

double Array_Sum(int arr[], int size)
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

