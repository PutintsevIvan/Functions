#pragma once
#include"constans.h"

int Sum(const int arr[], const int n); // ����� ��������� �������
double Sum(const double  arr[], const int n);
char Sum(const char  arr[], const int n);
int Sum(const int arr[ROWS][COLS], const int ROWS, const int COLS);


double Avg(const int arr[], const int n);     //������-�������������� ��������� �������
double Avg(const double arr[], const int n);
double Avg(const char arr[], const int n);
//double Avg(const int arr[ROWS][COLS], const int ROWS, const int COLS);

int minValueIn(const int arr[], const int n); //����������� �������� ������
char minValueIn(const char arr[], const int n);
double minValueIn(const double arr[], const int n);

int maxValueIn(const int arr[], const int n); //������������ �������� �������
char maxValueIn(const char arr[], const int n);
double maxValueIn(const double arr[], const int n); //������������ �������� �������