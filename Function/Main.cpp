#include<iostream>
using namespace std;




int Add(int a = 0, int b = 0, int c = 0);	//�������� ������� (���������� ������� - Function declaration)
int Sub(int a, int b);
int Mul(int a, int b);
double Div(int a, int b);

//Default arguments, Default parameters

void main()
{
	setlocale(LC_ALL, "");
	int a, b;
	cout << "������� ��� �����: "; cin >> a >> b;
	int c = Add(a, b);	//����� (�������������) ������� (Function call)
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Sub(a, b) << endl;
	cout << a << " * " << b << " = " << Mul(a, b) << endl;
	cout << a << " / " << b << " = " << Div(a, b) << endl;
	//cout << a << " ^ " << b << " = " << power(a, b) << endl;
}

int Add(int a, int b, int c)		//���������� ������� (����������� ������� - Function definition)
{
	//Addition - ��������
	int sum = a + b + c;
	return sum;
}
int Sub(int a, int b)
{
	//Subtraction - ���������
	return a - b;
}
int Mul(int a, int b)
{
	//Multiplication - ���������
	return a * b;
}
double Div(int a, int b)
{
	//Division - �������
	return (double)a / b;
}