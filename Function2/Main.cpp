#include"stdafx.h"
#include"constans.h"
#include"FillRand.h"
#include"Print.h"
#include"sort.h"
#include"statistics.h"









 void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[5];

	FillRand(arr,n);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Средне-арифмитическое элементов массива: " << Avg(arr, n) << endl;
	cout << "Минимальное значение массива: " << minValueIn(arr, n) << endl;
	cout << " Максимальное значение массива: " << maxValueIn(arr, n) << endl;
	Sort(arr, n);
	Print(arr, n);

	const int SIZE = 8;
	double brr[SIZE];

	FillRand(brr,SIZE);
	Print(brr,SIZE);
	cout << "Сумма элементов массива: " << Sum(brr,SIZE) << endl;
	cout << "Средне-арифмитическое элементов массива: " << Avg(brr,SIZE) << endl;
	cout << "Минимальное значение массива: " << minValueIn(brr,SIZE) << endl;
	cout << " Максимальное значение массива: " << maxValueIn(brr,SIZE) << endl;
	Sort(brr,SIZE);
	Print(brr, SIZE);

	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива : \t" << Sum(i_arr_2, ROWS, COLS) << endl;
	//cout << "Среднее-арифмитическое элементов массива: \t" << Avg(i_arr_2, ROWS, COLS) << endl;
	
}








	


	
