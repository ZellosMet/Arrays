#pragma once
#include"stdafx.h"
#include"constants.h"

int Sum(const int arr[], const int n);
int Sum(const int arr[ROWS][COLS], const int ROWS, const int COLS);
double Sum(const double arr[ROWS][COLS], const int ROWS, const int COLS);
char Sum(const char arr[ROWS][COLS], const int ROWS, const int COLS);

double Avg(const int arr[], const int n);
double Avg(const int arr[ROWS][COLS], const int ROWS, const int COLS);
double Avg(const double arr[ROWS][COLS], const int ROWS, const int COLS);
char Avg(const char arr[ROWS][COLS], const int ROWS, const int COLS);

int minValueIn(const int arr[], const int n);
int minValueIn(const int arr[ROWS][COLS], const int ROWS, const int COLS);
double minValueIn(const double arr[ROWS][COLS], const int ROWS, const int COLS);
char minValueIn(const char arr[ROWS][COLS], const int ROWS, const int COLS);

int maxValueIn(const int arr[], const int n);
int maxValueIn(const int arr[ROWS][COLS], const int ROWS, const int COLS);
double maxValueIn(const double arr[ROWS][COLS], const int ROWS, const int COLS);
char maxValueIn(const char arr[ROWS][COLS], const int ROWS, const int COLS);
