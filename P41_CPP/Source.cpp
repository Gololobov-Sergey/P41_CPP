#include<iostream>
#include<Windows.h>
#include<iomanip>
#include<algorithm>

#include"Timer.h"
#include"myFunc.h"
#include"Point.h"
#include"Date.h"
#include"Bank.h"

using namespace std;



int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout.setf(ios::boolalpha);


	Bank bank;
	bank.menu();


	/*Car car;
	car.move();
	car.beep();*/


	/// 08.03.2025 //////

	/*Point p;
	p.name = 'A';
	p.X = 10;
	p.Y = 15;

	Point p1 = {'B', 4, 6};

	printPoint(p);
	printPoint(p1);

	Point p3[3];
	p3[0].name = 'C';

	Point* p4 = new Point;
	p4->X = 10;
	p4->Y = 15;*/

	/*const int size = 5;
	Point p[size];
	for (size_t i = 0; i < size; i++)
	{
		p[i].name = 'A' + i;
		p[i].X = rand() % 10;
		p[i].Y = rand() % 10;

		p[i].print();
	}
	float maxLen = 0;
	int i1, i2;
	for (size_t i = 0; i < size - 1; i++)
	{
		for (size_t j = i + 1; j < size; j++)
		{
			float len = lenPoint(p[i], p[j]);
			if (len > maxLen)
			{
				maxLen = len;
				i1 = i;
				i2 = j;
			}
		}
	}

	cout << maxLen << endl;
	p[i1].print();
	p[i2].print();*/

	//cout << p << endl;


	//Date d = { 8, 3, 2025 };
	//d.print(); // 08.03.2025


	/*Human h;
	h.birthDay = { 8,3,2000 };
	h.setName();
	h.print();


	Drob d1;
	Drob d2;

	Drob d3 = d1.add(d2);*/


	/*for (float y = 1.3; y >= -1.1; y -= 0.06) {
		for (float x = -1.2; x <= 1.2; x += 0.025)
			if (pow((x * x + y * y - 1.0), 3) - x * x * y * y * y <= 0.0)
				cout << '@';
			else
				cout << ' ';
		cout << endl;
	}*/

	/// 04.03.2025 //////


	/*int size;
	cin >> size;
	int* p = new int[size];
	setArray(p, size, 0, 9);
	printArray(p, size);

	int*** p3 = convert2D(p, size);

	print3(p3);*/



	/*int size = 5;
	char buff[30];

	char** pib = new char*[size];

	for (size_t i = 0; i < size; i++)
	{
		cin.getline(buff, 30);
		int len = strlen(buff);
		pib[i] = new char[len + 1];
		strcpy_s(pib[i], len + 1, buff);
	}
	cout << endl;

	for (size_t i = 0; i < size; i++)
	{
		cout << pib[i] << endl;
	}

	bubbleSort(pib, size, strCompare);

	cout << endl;

	for (size_t i = 0; i < size; i++)
	{
		cout << pib[i] << endl;
	}*/

	/// 01.03.2025 //////


	/*int a = 9;
	int* pa = &a;
	int** ppa = &pa;

	cout << *pa << endl;
	cout << **ppa << endl;*/

	//int row, col;
	//cin >> row >> col;

	//int** p1 = nullptr;

	//int** p = createArray2D<int>(row, col);
	////createArray2D(p1, row, col);
	//setArray2D(p, row, col);
	//printArray2D(p, row, col);
	//cout << endl;

	/*addRowIndexArray2D(p, row, col, row);
	printArray2D(p, row, col);
	cout << endl;

	delRowArray2D(p, row);
	printArray2D(p, row, col);
	cout << endl;

	addRowIndexArray2D(p, row, col);
	printArray2D(p, row, col);
	cout << endl;

	addRowIndexArray2D(p, row, col, 2);
	printArray2D(p, row, col);
	cout << endl;*/

	/*addColumnIndexArray2D(p, row, col, 2);
	printArray2D(p, row, col);
	cout << endl;


	deleteArray2D(p, row);*/

	// *(*(p + i) + j) = p[i][j];

	/// 25.02.2025 //////

	/*char st1[80], st2[80];
	cin.getline(st1, 80);
	cin.getline(st2, 80);*/

	//strcpy_s(st2, 80, st1);
	//strncpy_s(st2, 80, st1, 5);

	//strcat_s(st2, 80, st1);
	//strncat_s(st2, 80, st1, 5);

	//cout << strcmp(st1, st2) << endl; // >=1 , 0, <1
	//cout << strncmp(st1, st2, 4) << endl; // >=1 , 0, <1
	//cout << _stricmp(st1, st2) << endl; // >=1 , 0, <1
	//cout << _strnicmp(st1, st2, 5) << endl; // >=1 , 0, <1

	//char* t = strstr(st1, st2);
	//char* t = strrchr(st1, 'a');
	//char* t = strchr(st1, 'a');
	//if(t)
		//cout << t << endl;

	/*cout << isalnum('a') << endl;
	cout << isalpha('a') << endl;
	cout << isdigit('a') << endl;
	cout << ispunct('a') << endl;
	cout << isprint('a') << endl;
	cout << isspace('a') << endl;
	cout << islower('a') << endl;
	cout << isupper('a') << endl;*/

	//_strset_s(st1, '#');

	/*cout << st1 << endl;
	cout << st2 << endl;*/

	//cout << countWord("      kjf     lkewjlwejwer     34r34     ") << endl;






	/*int sizeA, sizeB;
	cin >> sizeA >> sizeB;
	int* a = new int[sizeA];
	int* b = new int[sizeB];
	setArray(a, sizeA, 0, 10);
	setArray(b, sizeB, 0, 10);
	printArray(a, sizeA);
	printArray(b, sizeB);

	int* c = nullptr;
	int sizeC = 0;

	for (size_t i = 0; i < sizeA; i++)
	{
		if (lineSearch(b, sizeB, a[i]) == -1 && lineSearch(c, sizeC, a[i]) == -1)
		{
			addElemArray(c, sizeC, a[i]);
		}
	}

	printArray(c, sizeC);*/


	/// 22.02.2025 //////


	/*int arr[] = { 1,12,3,5,76 };
	cout << arr << endl;

	char st[] = { 'H', 'e', 'l', 'l', 'o', '\0'};
	char st2[] = "Hello C++";
	cout << st << endl;
	cout << st2 << endl;

	cout << st + 3 << endl;

	cout << lenStr("Hello") << endl;
	cout << lenStr(st) << endl;

	cout << strlen(st) << endl;*/


	//char name[30];
	//cin.getline(name, 30);
	////cout << name << endl;

	//char* st = replaceSymbol(name, 'a', 'o');
	//cout << st << endl;

	//cout << name << endl;


	//cout << hello << endl;
	//hello();

	//// type (*name)(param)

	//void(*message)() = hello;
	//message();
	//message = privet;
	//message();

	//void(*arr[])() = { hello, privet };
	//for (size_t i = 0; i < 2; i++)
	//{
	//	arr[i]();
	//}


	/*int size;
	cin >> size;
	int* p = new int[size];
	setArray(p, size, 0, 100);
	printArray(p, size);
	bubbleSort(p, size, lastNumber);
	printArray(p, size);*/


	/*int a = 5;
	int b = 9;*/

	//const int* pa = &a; // покажчик на константне значення
	//pa = &b;
	//*pa = 99; // error
	//a = 99;

	//int* const pa = &a; // константний покажчик
	//*pa = 99;
	//pa = &b; // error

	//const int* const pa = &a; // константний покажчик на константне значення
	//*pa = 99; // error
	//pa = &b;  // error


	/*int& ra = a;
	ra = b;
	cout << ra << " " << a << " " << b << endl;

	const int& cra = a;*/
	//cra = 99;


	/// 18.02.2025 //////

	/*int a = 5, b = 4;
	cout << a << " " << b << endl;
	my_swap(a, b);
	cout << a << " " << b << endl;*/


	/*int size;
	cin >> size;
	int* p = new int[size];
	setArray(p, size, 0, 10);
	printArray(p, size);
	addElemArray(p, size, 999);
	printArray(p, size);
	delElemArray(p, size);
	printArray(p, size);
	int m = 999;
	addElemArray(p, size, 999, 5);
	printArray(p, size);
	delElemArray(p, size, 3);
	printArray(p, size);*/

	/*int a = 5;       int b = 9;
	int* pa = &a;    int& ra = b;
	*pa = 999;       ra = 999;*/




	/// 15.02.2025 //////

	// a = length
	//int a = 5;

	//cout << a << endl;
	//cout << typeid(a).name() << endl;
	//cout << sizeof(a) << endl;
	//cout << &a << endl;

	//double d = 5.3;

	//int* pa = &a;
	//cout << pa << endl;
	//cout << *pa << endl;
	//*pa = 999;
	//cout << a << endl;

	////pa++;
	////cout << pa << endl;
	////cout << *pa << endl;

	//int b = 0;
	//int* pb = nullptr;

	//if(pb == nullptr)
	//	pb = &b;

	//cout << (pa != pb) << endl;

	// p + n = p + type * n
	// 
	// *(arr + i) = a[i]


	/*int arr[] = { 9,2,43,6,89,3 };
	cout << arr << endl;
	for (size_t i = 0; i < 6; i++)
	{
		cout << *(arr + i) << " ";
	}
	cout << endl;

	for (int* i = arr; i < &arr[6]; i++)
	{
		cout << *i << " ";
	}
	cout << endl;*/


	/*const int size = 260000;
	int arr[size];*/

	/*int size;
	cin >> size;
	int* p = new int[size];
	setArray(p, size, 0, 10);
	printArray(p, size);

	int count = 0;
	int* b = nullptr;
	for (size_t i = 0; i < size; i++)
	{
		if (p[i] % 2 == 0)
			b = addElemArray(b, count++, p[i]);
	}*/

	/*int* b = new int[count];
	count = 0;

	for (size_t i = 0; i < size; i++)
	{
		if (p[i] % 2 == 0)
			b[count++] = p[i];
	}*/

	//p = addElemArray(p, size++, 99);
	//printArray(b, count);

	//delete p;

	/*int* pa;
	double* pb;
	char* pc;
	cout << sizeof(pa) << endl;
	cout << sizeof(pb) << endl;
	cout << sizeof(pc) << endl;*/



	/*cout << p << endl;
	*p = 100;
	cout << *p << endl;*/


	// *(a + i) = a[i]

	/// 11.02.2025 //////

	/*cout << Sum(3.5, 6, 'A') << endl;
	cout << Sum('A', 3, 6.5) << endl;

	int a = 3;
	float b = 3.3;

	auto c = a + b;

	decltype(a + b) c;*/

	// X | 2 | X
	//-----------
	// 4 | 0 | X
	//-----------
	// 7 | 8 | 9
	//
	//
	// 

	/// 08.02.2025 //////

	/*starLine();
	starLine(30);
	starLine(40, '#');*/

	//f(1010011101)

	//srand(time(0));
	//const int size = 5;
	//int min = 0, max = 1000;
	//char arr[size]; // = { 3,45,67,0 };

	//setArray(arr, size);
	//printArray(arr, size);

	//bubbleSort(arr, size);

	//printArray(arr, size);

	//cout << maxValueArray(arr, size) << endl;

	//cout << lineSearch(arr, size, 'A') << endl;

	//cout << Sum() << endl;
	//cout << Sum(3) << endl;
	//cout << Sum(3, 3) << endl;


	/*for (size_t i = 0; i < 1000; i++)
	{
		if (isPrime(i))
			cout << i << " ";
	}*/


	/*starLine();
	starLine();
	starLine();

	int c = Sum(2, 5);
	cout << avg(3,4,6) << endl;*/


	/// 04.02.2025 //////
	//srand(time(0));
	//const int size = 10000;
	//int min = 0, max = 1000;
	//int arr[size]; // = { 3,45,67,0 };

	//for (size_t i = 0; i < size; i++)
	//{
	//	arr[i] = rand() % (max - min + 1) + min;
	//}

	/*for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;*/

	//Timer t;

	/*for (size_t i = 0; i < size - 1; i++)
	{
		for (size_t j = 0; j < size - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
			}
		}
	}*/


	//cout << t.elapsed() << endl;

	/*for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;*/


	/*const int row = 4;
	const int col = 5;
	int arr[row][col];
	int min = 0, max = 9;
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			arr[i][j] = rand() % (max - min + 1) + min;
		}
	}

	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}*/

	/*for (size_t i = 0; i < row; i++)
	{
		swap(arr[i][0], arr[i][col-1]);
	}
	cout << endl;*/

	/*for (size_t j = 0; j < col; j++)
	{
		for (size_t i = 0; i < row / 2; i++)
		{
			swap(arr[i][j], arr[row-1-i][j]);
		}
	}
	cout << endl;*/


	/*for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col / 2; j++)
		{
			swap(arr[i][j], arr[i][col-1-j]);
		}
	}
	cout << endl;*/



	/*for (size_t i = 0; i < row - 1; i++)
	{
		for (size_t j = 0; j < col-1-i; j++)
		{
			swap(arr[i][j], arr[row-1-j][col-1-i]);
		}
	}
	cout << endl;*/

	/*for (size_t i = 0; i < row - 1; i++)
	{
		for (size_t j = 1 + i; j < col; j++)
		{
			swap(arr[i][j], arr[j][i]);
		}
	}
	cout << endl;*/

	/*for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}


	int a[3][3][3][3][4][6][10][3];*/


	/// 01.02.2025 //////

	//srand(time(0));
	//const int size = 10;
	//int min = 0, max = 10;
	//int arr[size]; // = { 3,45,67,0 };

	//int arrB[size];

	//for (size_t i = 0; i < size; i++)
	//{
	//	arr[i] = rand() % (max - min + 1) + min;
	//}

	///*for (size_t i = 0; i < 4; i++)
	//{
	//	cin >> arr[i];
	//}*/

	//for (size_t i = 0; i < size; i++)
	//{
	//	cout << arr[i] << " ";
	//}
	//cout <<  endl;

	/*int count = 0;
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] == 0)
			count++;
	}
	cout << count << endl;

	int count0 = 0;
	for (size_t i = 0; arr[i] != 1; i++)
	{
		count0++;
	}
	cout << count0 << endl;*/



	/*int count = 0;
	int n;
	cin >> n;
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] == n)
			count++;
	}
	cout << count << endl;*/


	/*int iMax = 0, iMin = 0;
	int maxElem = arr[0], minElem = arr[0];
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] > maxElem)
		{
			maxElem = arr[i];
			iMax = i;
		}

		if (arr[i] < minElem)
		{
			minElem = arr[i];
			iMin = i;
		}
	}

	int iBig = (iMax > iMin) ? iMax : iMin;
	int iSmall = (iMin < iMax) ? iMin : iMax;
	int count = iBig - iSmall - 1;
	cout << iSmall << " " << iBig << endl;
	cout << count << endl;*/


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


					/*int d = (5 + 28)%7;

					SetColor(White, Black);
					cout << " -------- 1 ---------" << endl;
					cout << " Mo Tu We Th Fr";
					SetColor(LightRed, Black);
					cout << " Sa Su" << endl;
					for (int i = 1 - d; i <= 31; i++)
					{
						SetColor(((i+d) % 7 == 0 || (i + 1 + d) % 7 == 0) ? LightRed : White, Black);
						if (i <= 0)
						{
							cout << setw(3) << " ";
						}
						else
						{
							cout << setw(3) << i;
						}
						if ((i+d) % 7 == 0)
							cout << endl;
					}
					cout << endl;*/



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
	return 0;
}

