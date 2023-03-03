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

	const int N = 5;  //������� ������� ������������ �������
	int arr[N] = {1,2}; //������������� �������
	arr[2] = 123; //��������� � �������� ������� �� ������
	cout << arr[2] << endl; //��������� � ������� �� ������
	
	cout << "������� �������� �������: ";
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

	cout << "��������������� �������� �������:\n\n";
	for (int i = 0; i < SIZE; i++)
	{
		cout << "[ " << array[i] << " ] ";
	}

	cout << "\n\n����� ��������� ������� = " << Array_Sum(array, SIZE) << endl;
	cout << "������� �������������� ��������� �������� = " << Array_Sum(array, SIZE)/SIZE << endl;
	cout << "������������ ������� ������� = " << Array_Max(array, SIZE) << endl;
	cout << "����������� ������� ������� = " << Array_Min(array, SIZE) << endl;

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

