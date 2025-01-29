#include<iostream>
#include<Windows.h>
#include<iomanip>

using namespace std;

enum Color
{
	Black = 0, Blue = 1, Green = 2, Cyan = 3, Red = 4, Magenta = 5, Brown = 6, LightGray = 7, DarkGray = 8,
	LightBlue = 9, LightGreen = 10, LightCyan = 11, LightRed = 12, LightMagenta = 13, Yellow = 14, White = 15
};

void SetColor(int text, int background)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (WORD)((background << 4) | text));
}


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout.setf(ios::boolalpha);

	/// 28.01.2025 //////

	/*for (int i = 5; i >= 0; i--)
	{
		cout << i << " ";
	}*/
	
	/*Дано вещественное число — цена 1 кг конфет. Вывести стоимость 0.1,
		0.2, ..., 1 кг конфет.*/


	/*float price;
	cin >> price;
	for (int i = 2; i <= 10; i+=2)
	{
		cout << 1+i/10.f << " kg - " << (1+i/10.) * price << " grn" << endl;
	}*/


	/*Дано вещественное число — цена 1 кг конфет.Вывести стоимость 1.2,
		1.4, ..., 2 кг конфет.*/


	/*Дано целое число N(> 0).Найти квадрат данного числа, используя для
		его вычисления следующую формулу :
		N2 = 1 + 3 + 5 + ... + (2·N – 1).*/

	/*int n;
	cin >> n; 
	int sum = 0;
	for (size_t i = 1; i <= 2 * n - 1; i+=2)
	{
		sum += i;
	}
	cout << sum << endl;*/



	/*Дано вещественное число A и целое число N(> 0).Используя один
		цикл, вывести все целые степени числа A от 1 до N.*/

	//int n;
	//cin >> n;
	//float a;
	//cin >> a;
	//float f = 1, sum = 1;

	//for (size_t i = 0; i < n; i++)
	//{
	//	
	//	f *= a;
	//	sum += f;
	//	//cout << i + 1 << " " << f << endl;
	//}
	//cout << sum << endl;


	SetColor(White, Black);
	cout << " -------- 1 ---------" << endl;
	cout << " Mo Tu We Th Fr";
	SetColor(LightRed, Black);
	cout << " Sa Su" << endl;
	for (size_t i = 1; i <= 30; i++)
	{
		SetColor((i % 7 == 0 || (i + 1) % 7 == 0) ? LightRed : White, Black);
		cout << setw(3) << i;
		if (i % 7 == 0)
			cout << endl;
	}
	cout << endl;



	///* десятки и единички */
	//int t = (number / 10) % 10;
	//int u = number % 10;

	//if (t == 1) {
	//	switch (u) {
	//	case 0: cout << " десять"; break;
	//	case 1: cout << " одиннадцать"; break;
	//	case 2: cout << " двенадцать"; break;
	//	case 3: cout << " тринадцать"; break;
	//	case 4: cout << " четырнадцать"; break;
	//	case 5: cout << " пятнадцать"; break;
	//	case 6: cout << " шестнадцать"; break;
	//	case 7: cout << " семнадцать"; break;
	//	case 8: cout << " восемнадцать"; break;
	//	case 9: cout << " девятнадцать"; break;
	//	}
	//}
	//else {
	//	switch (t) {
	//	case 2: cout << " двадцать"; break;
	//	case 3: cout << " тридцать"; break;
	//	case 4: cout << " сорок"; break;
	//	case 5: cout << " пятьдесят"; break;
	//	case 6: cout << " шестьдесят"; break;
	//	case 7: cout << " семьдесят"; break;
	//	case 8: cout << " восемьдесят"; break;
	//	case 9: cout << " девяносто"; break;
	//	}

	//	switch (u) {
	//	case 1: cout << " один"; break;
	//	case 2: cout << " два"; break;
	//	case 3: cout << " три"; break;
	//	case 4: cout << " четыре"; break;
	//	case 5: cout << " пять"; break;
	//	case 6: cout << " шесть"; break;
	//	case 7: cout << " семь"; break;
	//	case 8: cout << " восемь"; break;
	//	case 9: cout << " девять"; break;
	//	}
	//}
	//cout << endl;


	/*int m;
	cin >> m;
	switch (m)
	{
	case 1: case 2: case 12: cout << "Winter" << endl; break;
	case 3: case 4: case 5:  cout << "Winter" << endl; break;
	default:
		break;
	}*/


	/// 21.01.2025 //////

	/*int a, b, c;
	cin >> a >> b >> c;
	if (a > b && b > c)
	{
		cout << a << endl;
	}
	else
	{
		if (b > c)
		{
			cout << b << endl;
		}
		else
		{
			cout << c << endl;
		}
	}*/

	/*double a = 0, b;
	char op;

	cout << "a=";
	cin >> a;
	cout << "(+, -, *, /): ";
	cin >> op;
	cout << "b= ";
	cin >> b;

	switch (op)
	{
	case '+':
		cout << "rez = " << a + b << endl;
		break;

	case '-':
		cout << "rez = " << a - b << endl;
		break;
	case '*': 
		cout << "rez = " << a * b << endl;
		break;
	case '/': 
		cout << "rez = " << a / b << endl;
		break;
	default:
		cout << "error404!" << endl;
		break;
	}*/

	/*if (op == '+') 
	{
		cout << "rez: " << a + b << endl;
	}
	else if (op == '-') 
	{
		cout << "rez=: " << a - b << endl;
	}
	else if (op == '*') 
	{
		cout << "rez: " << a * b << endl;
	}
	else if (op == '/') 
	{
		if (b != 0) 
		{
			cout << "rez" << a / b << endl;
		}
		else 
		{
			cout << "error404!" << endl;
		}
	}
	else {
		cout << "error404!" << endl;
	}*/




	
	


	// -, +, ++, -- 
	// = , + , -, *, /, % , += , -=, *=, /=, %=, ()

	// !
	// < , >, == , <=, >=, != , || (or), && (and), ^ (xor)

	// ~ , << , >> , & , |, :: , ?: , #, ,(comma) , . ->
		

	//int a = 5, b = 4, c;

	//cout << a << endl;  // 5
	//cout << a++ << endl; // 6
	//cout << ++a << endl; // 7
	//cout << a << endl; // 7
	/*a = a + b;
	a += b;
	a *= b;
	a += 1;
	a++;
	++a;
	a--;*/

	


	/*unsigned int a = 3000000000;
	cout << a << endl;

	const float pi = 3.141592;

	sqrt(25);*/

	/*int a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;
	float p = (a + b + c) / 2.;
	cout << p << endl;
	float s = sqrt(p * (p - a) * (p - b) * (p - c));
	cout << s << endl;*/


	/*cout << "Hello C++" << endl;
	cout << "Мене звати Сергій" << endl;
	cout << 'a' << endl;
	cout << 123 << endl;
	cout << true << endl;*/


	// modify type name;

	// bool      - 1b

	// char      - 1b

	// short     - 2b
	// int       - 4b
	// long      - 4b
	// long long - 8b

	// float     - 4b (7)
	// double    - 8b (15)

	/*int year = 2025;
	cout << &year << endl;


	float x = 1.99999;
	cout << x << endl;

	char t = 'a';
	cout << (char)(t + 3) << endl;

	cout << 3.2 + 3 << endl;*/


	/*int a, b;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	int s = a * b;
	cout << "Площа, при а = " << a << ", b = " << b << " дорівнює " << s << " кв. од" << endl;*/


	

	system("pause");
}

