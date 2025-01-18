#include<iostream>
#include<Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout.setf(ios::boolalpha);

	/*cout << "Hello C++" << endl;
	cout << "Мене звати Сергій" << endl;
	cout << 'a' << endl;
	cout << 123 << endl;
	cout << true << endl;*/


	// type name;

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


	cout << 150 % 100 << endl;

	system("pause");
}