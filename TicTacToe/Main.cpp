#include<iostream>
#include<conio.h>
using namespace std;
#define VERTICAL_OFFSET	 "\n\n\n\n\n"	
#define HORIZONTAL_OFFSET "\t\t\t\t\t"
void PrinField(char field[], const int n,char player);
void move(char field[], const int n,char player);

void main()
{
	setlocale(LC_ALL, "");
	const int n = 9;
	char field[n] ="        "/*{ /*1,2,3,4,5,6,7,8,9*/;
	PrinField(field, n,'x');
	//move(field, n);
}
void PrinField(char field[], const int n,char player)
{
	system("CLS");
	cout << VERTICAL_OFFSET;
	for (int i = 6; i >= 0; i -= 3)
	{
		cout << HORIZONTAL_OFFSET;
		cout << " ";
		for (int j = 0; j < 3; j++)
		{
			cout << /*(int)*/field[i + j];
			if (j < 2)cout << " | ";
		}
		cout << endl;
		cout << HORIZONTAL_OFFSET;
		if(i>0)cout << "--- --- ---";
		cout << endl;
	}
	move(field, n,player);
}
void move(char field[], const int n,char player)
{
char key;
	//for (int i = 0; i < 256; i++)cout << i << (char)i << endl;
	do
	{
		
		key = _getch();
		if (key == 27)return;
		if (key < '1' || key >'9')cout << "Error: выход за пределы игрового поля" << endl;
		else if (field[key-49]!=0)cout << "Error: клетка уже занята" << endl;
	}
	while (key < '1' || key >'9' ||key[field-49]!=0);
	field[key - 49] ==player;
     
	/*if (player == 'x')PrinField(field, n, '0');
	else PrinField(field,n,'x');*/
	PrinField(field, n, player == 'x' ? '0' : 'x');
}