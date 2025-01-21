#include<iostream>
#include<Windows.h>

using namespace std;


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout.setf(ios::boolalpha);


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

	double a = 0, b;
	char op;

	cout << "a=";
	cin >> a;
	cout << "(+, -, *, /): ";
	cin >> op;
	cout << "b= ";
	cin >> b;

	if (op == '+') 
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
	}




	
	


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

