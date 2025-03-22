#pragma once
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

void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}


inline void starLine(int count = 10, char symbol = '*')
{
	for (size_t i = 0; i < count; i++)
	{
		cout << symbol;
	}
	cout << endl;
}

//int Sum(int a = 0, int b = 5)
//{
//	return a + b;
//}

double avg(int a, int b, int c)
{
	return (a + b + c) / 3.;
}

template<class T>
void printArray(const T* arr, int size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}


void setArray(float arr[], int size, int min, int max)
{
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % (max - min + 1) + min;
	}
}

void setArray(char arr[], int size)
{
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % (90 - 65 + 1) + 65;
	}
}

void setArray(int arr[], int size, int min, int max)
{
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % (max - min + 1) + min;
	}
}

template<class T>
bool asc(T a, T b)
{
	return a > b;
}

template<class T>
bool desc(T a, T b)
{
	return a < b;
}


bool lastNumber(int a, int b)
{
	if (a % 10 > b % 10)
		return true;
	else if (a % 10 == b % 10)
		return asc(a, b);
	else
		return false;
}

bool strCompare(char* st1, char* st2)
{
	return strcmp(st1, st2) >= 1;
}

template<class T>
void bubbleSort(T* arr, int size, bool(*method)(T, T) = asc)
{
	for (size_t i = 0; i < size - 1; i++)
	{
		for (size_t j = 0; j < size - 1 - i; j++)
		{
			if (method(arr[j], arr[j + 1]))
			{
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}

/// <summary>
/// Фнкція визначення простого числа
/// </summary>
/// <param name="n">- чисо</param>
/// <returns>Логічне значення bool</returns>
bool isPrime(int n)
{
	for (size_t i = 2; i < n; i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}


template<class T>
T maxValueArray(T arr[], int size)
{
	T maxElem = arr[0];
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] > maxElem)
		{
			maxElem = arr[i];
		}
	}
	return maxElem;
}


#define NOT_FOUND -1;

template<class T>
int lineSearch(T arr[], int size, T key)
{
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] == key)
		{
			return i;
		}
	}
	return NOT_FOUND;
}


template<class T1, class T2, class T3>
auto Sum(T1 a, T2 b, T3 c) -> decltype(a + b)
{
	return a + b + c;
}


template<class T>
void printArray2D(T** arr, int row, int col)
{
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}



void setArray2D(int** arr, int row, int col, int min = 0, int max = 9)
{
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			arr[i][j] = rand() % (max - min + 1) + min;
		}
	}
}

template<class T>
void addElemArray(T*& arr, int& size, T elem)
{
	T* temp = new T[size + 1];
	for (size_t i = 0; i < size; i++)
	{
		temp[i] = arr[i];
	}
	temp[size] = elem;
	delete arr;
	size++;
	arr = temp;
}

template<class T>
void delElemArray(T*& arr, int& size)
{
	T* temp = new T[size - 1];
	for (size_t i = 0; i < size - 1; i++)
	{
		temp[i] = arr[i];
	}
	delete arr;
	size--;
	arr = temp;
}


template<class T>
void addElemArray(T*& arr, int& size, const T& elem, int index)
{
	if (index < 0)
	{
		return;
	}
	else if (index == size)
	{
		addElemArray(arr, size, elem);
	}
	else
	{
		T* temp = new T[size + 1];
		for (size_t i = 0; i < index; i++)
		{
			temp[i] = arr[i];
		}
		temp[index] = elem;
		for (size_t i = index; i < size; i++)
		{
			temp[i + 1] = arr[i];
		}
		delete arr;
		size++;
		arr = temp;
	}
}


template<class T>
void delElemArray(T*& arr, int& size, int index)
{
	T* temp = new T[size - 1];
	for (size_t i = 0; i < index; i++)
	{
		temp[i] = arr[i];
	}
	for (size_t i = index + 1; i < size; i++)
	{
		temp[i - 1] = arr[i];
	}
	delete arr;
	size--;
	arr = temp;
}


void my_swap(int& a, int& b)
{
	int t = a;
	a = b;
	b = t;
	cout << "In func:" << endl;
	cout << a << " " << b << endl;
}

void hello()
{
	cout << "Hello" << endl;
}

void privet()
{
	cout << "Privet" << endl;
}



char* replaceSymbol(const char* str, char _old, char _new)
{
	int len = strlen(str);
	char* temp = new char[len + 1];

	for (size_t i = 0; i < len + 1; i++)
	{
		temp[i] = str[i];
	}

	int i = 0;
	while (temp[i] != '\0')
	{
		if (temp[i] == _old)
		{
			temp[i] = _new;
		}
		i++;
	}
	return temp;
}

int countWord(const char* st)
{
	int i = 0;
	int word = 0;
	while (st[i] != '\0')
	{
		if (st[i] != ' ' && (st[i + 1] == ' ' || st[i + 1] == '\0'))
			word++;
		i++;
	}
	return word;
}

template<class T>
T** createArray2D(int row, int col)
{
	T** p = new T * [row];
	for (size_t i = 0; i < row; i++)
	{
		p[i] = new T[col];
	}
	return p;
}

template<class T>
void deleteArray2D(T**& p, int row)
{
	for (size_t i = 0; i < row; i++)
	{
		delete p[i];
	}
	delete p;
	p = nullptr;
}


template<class T>
void createArray2D(T**& p, int row, int col)
{
	p = createArray2D<T>(row, col);
}

template<class T>
void addRowArray2D(T**& p, int& row, int col)
{
	T** temp = new T * [row + 1];
	for (size_t i = 0; i < row; i++)
	{
		temp[i] = p[i];
	}
	temp[row] = new T[col]{ 0 };
	delete p;
	row++;
	p = temp;
}

template<class T>
void delRowArray2D(T**& p, int& row)
{
	T** temp = new T * [row - 1];
	for (size_t i = 0; i < row - 1; i++)
	{
		temp[i] = p[i];
	}
	delete p[row - 1];
	delete p;
	row--;
	p = temp;
}



template<class T>
void addRowIndexArray2D(T**& p, int& row, int col, int index = 0)
{
	T** temp = new T * [row + 1];
	for (size_t i = 0; i < index; i++)
	{
		temp[i] = p[i];
	}
	temp[index] = new T[col]{ 0 };
	for (size_t i = index; i < row; i++)
	{
		temp[i + 1] = p[i];
	}
	delete p;
	row++;
	p = temp;
}


template<class T>
void addColumnIndexArray2D(T**& p, int row, int& col, int index = 0)
{
	for (size_t i = 0; i < row; i++)
	{
		addElemArray(p[i], col, 0, index);
		col--;
		/*T* temp = new T[col + 1];
		for (size_t j = 0; j < index; j++)
		{
			temp[j] = p[i][j];
		}
		temp[index] = 0;
		for (size_t j = index; j < col; j++)
		{
			temp[j + 1] = p[i][j];
		}
		delete p[i];
		p[i] = temp;*/
	}
	col++;
}

int*** convert2D(int* p, int size)
{
	int count = 0;
	for (size_t i = 2; i < size; i++)
	{
		if (size % i == 0)
		{
			count++;
		}
	}

	int*** p3 = new int** [count];

	int k = 0;
	int row, col;
	for (size_t n = 2; n < size; n++)
	{
		if (size % n == 0)
		{
			row = n;
			col = size / n;

			createArray2D(p3[k], row, col);
			for (size_t i = 0; i < size; i++)
			{
				p3[k][i / col][i % col] = p[i];
			}
			k++;
		}
	}

	return p3;
}

void print3(int*** p)
{
	int k = _msize(p) / sizeof(int**);
	for (size_t i = 0; i < k; i++)
	{
		int row = _msize(p[i]) / sizeof(int*);
		int col = _msize(p[i][0]) / sizeof(int);
		printArray2D(p[i], row, col);
		cout << endl;
	}
}


