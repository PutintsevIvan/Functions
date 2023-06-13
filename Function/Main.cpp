#include<iostream>
using namespace std;
int Add(int a = 0, int b = 0, int c = 0);
int Sub(int a, int b);
int Mul(int a, int b);
double  Div(int a, int b);
void main()

{
	setlocale(LC_ALL, "");
	int a, b;
	cout << "Введите два числа: "; cin >> a >> b;
	int c = Add(a, b);   //Вызов (использование) функции (Function call)
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Sub(a, b) << endl;
	cout << a << " * " << b << " = " << Mul(a, b) << endl;
	cout << a << " / " << b << " = " <<(double)Div(a, b) << endl;
}

 
int Add(int a=0, int b=0,int c=0)   //Реализация функции(определение функции-Function definition)
{
	//Addition-сложение;
	int sum = a + b+c;
	return sum;
}
int Sub(int a, int b)
{
	//Subtraction-вычитание
	return a - b;
		
}
int Mul(int a, int b)
{
	//Multiplication-умножение
	return a * b;
}
double  Div(int a, int b)
{
	//Division-деление 
	return(double) a / b;
}
