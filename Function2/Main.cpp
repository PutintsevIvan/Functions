#include<iostream>
using namespace std;
#define tab "\t"
#define delimiter "\n--------------\n"
void FillRand(int arr[], const int n);    //���������� ������� ���������� ������� 
void FillRand(double arr[], const int n); //���������� ������� ���������� ������� 
void Print(const int arr[], const int n);   //����� ������� �� �����
void Print(const double arr[], const int n); //����� ������� �� �����
void Sort(int arr[], const int n); //���������� �������
int Sum(const int arr[], const int n); // ����� ��������� �������
double Sum(const double  arr[], const int n); //
double Avg(const int arr[], const int n);     //������-�������������� ��������� �������
int minValueIn(const int arr[], const int n); //����������� �������� �������
int maxValueIn(const int arr[], const int n); //������������ �������� �������


void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[5];

	FillRand(arr,n);
	Print(arr, n);
	cout << "����� ��������� �������: " << Sum(arr, n) << endl;
	cout << "������-�������������� ��������� �������: " << Avg(arr, n) << endl;
	cout << "����������� �������� �������: " << minValueIn(arr, n) << endl;
	cout << " ������������ �������� �������: " << maxValueIn(arr, n) << endl;
	Sort(arr, n);
	Print(arr, n);

}

void FillRand(int arr[], const int n)   //���������� ������� ���������� �������
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10;
	}
}
void FillRand(double arr[], const int n)    //��������� ������ ���������� �������
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10000;
		arr[i] /= 100;
	}
}
void Print(const int arr[], const int n) //����� ������� �� �����
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
	void Print( const double arr[], const int n) //����� ������� �� �����
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
	void Sort(int arr[], const int n) //���������� �������
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
	int Sum(const int arr[], const int n)
	{
		int Sum = 0;
		for (int i = 0; i < n; i++)
		{
			Sum += arr[i];
		}
		return Sum;
	}
	double Sum(const double arr[], const int n)
	{
		int Sum = 0;
		for (int i = 0; i < n; i++)
		{
			Sum += arr[i];
		}
		return Sum;
	}
	double Avg(const int arr[], const int n)
	{
		return(double)Sum(arr, n) / n;
	}
	int minValueIn(const int arr[], const int n)
	{
		int min = arr[0];
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
