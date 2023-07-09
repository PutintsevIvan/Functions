#pragma once
#include"constans.h"

int Sum(const int arr[], const int n); // сумма элементов массива
double Sum(const double  arr[], const int n);
char Sum(const char  arr[], const int n);
int Sum(const int arr[ROWS][COLS], const int ROWS, const int COLS);


double Avg(const int arr[], const int n);     //средне-арифмитическое элементов массива
double Avg(const double arr[], const int n);
double Avg(const char arr[], const int n);
//double Avg(const int arr[ROWS][COLS], const int ROWS, const int COLS);

int minValueIn(const int arr[], const int n); //минимальное значение массив
char minValueIn(const char arr[], const int n);
double minValueIn(const double arr[], const int n);

int maxValueIn(const int arr[], const int n); //максимальное значение массива
char maxValueIn(const char arr[], const int n);
double maxValueIn(const double arr[], const int n); //максимальное значение массива
