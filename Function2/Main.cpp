﻿#include<iostream>
using namespace std;
#define tab "\t"
#define delimiter "\n--------------\n"


const int ROWS = 3;
const int COLS = 4;


void FillRand(int arr[], const int n);    //заполнение массива случайными числами 
void FillRand(double arr[], const int n); //заполнение массива случайными числами 
void FillRand(char arr[], const int n); 
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);


void Print(const int arr[], const int n);   //вывод массива на экран
void Print(const double arr[], const int n); //вывод массива на экран
void Print(const char arr[], const int n); 
void Print(const int arr[ROWS][COLS], const int ROWS, const int COLS);


void Sort(int arr[], const int n); //сортировка массива
void Sort(char arr[], const int n); //
void Sort(double arr[], const int n);

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
	/*cout << "Среднее-арифмитическое элементов массива: \t" << Avg(i_arr_2, ROWS, COLS) << endl;*/
	
}



void FillRand(int arr[], const int n)   //заполнение массива случайными числами
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10;
	}
}
void FillRand(double arr[], const int n)    //заполняет массив случайными числами
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10000;
		arr[i] /= 100;
	}
}
void FillRand(char arr[], const int n)   
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
			arr[i][j] = rand()%100;
		}
	}
}

void Print(const int arr[], const int n) //вывод массива на экран
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
	void Print( const double arr[], const int n) //вывод массива на экран
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
	void Print( const char arr[], const int n) //вывод массива на экран
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}


	void Print(const int arr[ROWS][COLS], const int ROWS, const int COLS)
	{
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS;j++)
			{
				cout << arr[i][j] << tab;
			}
			cout << endl;

		}

	}




	void Sort(int arr[], const int n) //сортировка массива
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n + 1; j++)
			{
				if (arr[j] < arr[i])
				{
					int buffer = arr[i];
						arr[i] = arr[j];
					arr[i] = buffer;
				}
			}
		}
	}
	void Sort(char arr[], const int n) //сортировка массива
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n + 1; j++)
			{
				if (arr[j] < arr[i])
				{
					char buffer = arr[i];
					arr[i] = arr[j];
					arr[i] = buffer;
				}
			}
		}
	}
	void Sort(double arr[], const int n) //сортировка массива
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n + 1; j++)
			{
				if (arr[j] < arr[i])
				{
					double buffer = arr[i];
					arr[i] = arr[j];
					arr[i] = buffer;
				}
			}
		}
	}



	int Sum(const int arr[], const int n)
	{
		int sum = 0;
		for (int i = 0; i < n; i++)
		{
			sum += arr[i];
		}
		return sum;
	}
	double Sum(const double arr[], const int n)
	{
		double sum = 0;
		for (int i = 0; i < n; i++)
		{
			sum += arr[i];
		}
		return sum;
	}

	char Sum(const char arr[], const int n)
	{
		char sum = 0;
		for (int i = 0; i < n; i++)
		{
			sum += arr[i];
		}
		return sum;
	}

	int Sum(const int arr[ROWS][COLS], const int ROWS, const int COLS)
	{
		int sum = 0;
		{
			for (int i = 0; i < ROWS; i++)
			{
				for (int j = 0; j < COLS; j++)
				{
					sum += arr[i][j];
				}
				cout << endl;
			}
		}
		return sum;
	}

	double Avg(const int arr[], const int n)
	{
		return(double)Sum(arr, n) / n;
	}
	double Avg(const double arr[], const int n)
	{
		return(double)Sum(arr, n) / n;
	}
	double Avg(const char arr[], const int n)
	{
		return(double)Sum(arr, n) / n;
	}
	/*double Avd(const int arr[ROWS][COLS], const int ROWS, const int COLS)
	{
		return(double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
	}*/




	int minValueIn(const int arr[], const int n)
	{
		int min = arr[0];
		for (int i = 0; i < n; i++)
		{
			if (arr[i] < min)min = arr[i];
		}
		return min;
	}
	char minValueIn(const char arr[], const int n)
	{
		int min = arr[0];
		for (int i = 0; i < n; i++)
		{
			if (arr[i] < min)min = arr[i];
		}
		return min;
	}
	double minValueIn(const double arr[], const int n)
	{
		double min = arr[0];
		for (int i = 0; i < n; i++)
		{
			if (arr[i] < min)min = arr[i];
		}
		return min;
	}

	int maxValueIn(const int arr[], const int n)
	{
		int max = arr[0];
		for (int i = 0; i < n; i++)
		{
			if (arr[i] > max)max = arr[i];
		}
		return max;
	}
	char maxValueIn(const char arr[], const int n)
	{
		int max = arr[0];
		for (int i = 0; i < n; i++)
		{
			if (arr[i] > max)max = arr[i];
		}
		return max;
	}
	double maxValueIn(const double arr[], const int n)
	{
		double max = arr[0];
		for (int i = 0; i < n; i++)
		{
			if (arr[i] > max)max = arr[i];
		}
		return max;
	}
