#include<iostream>
#include<Windows.h>

using namespace std;


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout.setf(ios::boolalpha);

	/// 25.01.2025 //////

	//typedef unsigned char UC;

	//UC t;

	/*for (int i = 0; i < 10; i++)
	{
		cout << "mama" << endl;
	}*/


	int b, c;
	cin >> b;
	cin >> c;
	for (int i = 0; i <= c; i+=2)
	{
		cout << i << " ";
	}
	cout << endl;


	/*int n, count = 0;
	cin >> n;
	while (n > 0)
	{
		count++;
		n /= 10;
	}
	cout << count << endl;*/


	/*int a, sum = 0;
	do
	{
		cin >> a;
		sum += a;
	} while (a != 0);
	cout << sum << endl;*/




	/*int a = 1;
	while (a < 6)
	{
		cout << a++ << " ";
	}

	do
	{
		
	} while (true);*/

	//(condition) ? oper1 : oper2;

	/*int a = 5, b = 4, c = 6, max;
	if (a > b)
	{
		max = a;
	}
	else
	{
		max = b;
	}
	
	(a > b) ? max = a : max = b;

	max = (a > b) ? a : b;

	max = (a > b && a > c) ? a : (b > c) ? b : c;*/



	/*Дано целое число в диапазоне 100–999. Вывести строку - описание
	  данного числа, например: 256 — «двести пятьдесят шесть», 814 — «во -
	  семьсот четырнадцать».*/


	//int number;
	//cout << "100-999: ";
	//cin >> number;

	///* сотни */
	//int h = number / 100;
	//switch (h) {
	//case 1: cout << "сто"; break;
	//case 2: cout << "двести"; break;
	//case 3: cout << "триста"; break;
	//case 4: cout << "четыреста"; break;
	//case 5: cout << "пятьсот"; break;
	//case 6: cout << "шестьсот"; break;
	//case 7: cout << "семьсот"; break;
	//case 8: cout << "восемьсот"; break;
	//case 9: cout << "девятьсот"; break;
	//}

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

