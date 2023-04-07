#pragma once
#include"Constants.h"

template<typename T> T Sum(T const arr[], const int size);
template<typename T> T Sum(T const arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T> double Avg(T const arr[], const int size);
template<typename T> double Avg(const T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T> T minValueIn(T const arr[], const int size);
template<typename T> T minValueIn(const T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T> T maxValueIn(T const arr[], const int size);
template<typename T> T maxValueIn(const T arr[ROWS][COLS], const int ROWS, const int COLS);