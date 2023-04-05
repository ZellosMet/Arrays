#pragma once
#include"stdafx.h"
#include"constants.h"

void shiftLeft(int arr[], const int n, int number_of_shifts);
void shiftRight(int arr[], const int n, int number_of_shifts);
void shiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);
void shiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);
void shiftLeft(double arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);
void shiftRight(double arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);
void shiftLeft(char arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);
void shiftRight(char arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);
