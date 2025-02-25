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

void starLine(int count = 10, char symbol = '*')
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
	return -1;
}


template<class T1, class T2, class T3>
auto Sum(T1 a, T2 b, T3 c) -> decltype(a + b)
{
	return a + b + c;
}


template<class T>
void printArray2D(T arr[10][10], int row, int col)
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
	for (size_t i = 0; i < size-1; i++)
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
	for (size_t i = index+1; i < size; i++)
	{
		temp[i-1] = arr[i];
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

int lenStr(const char* str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return i;
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
		if(st[i] != ' ' && (st[i+1] == ' ' || st[i+1] == '\0'))
			word++;
		i++;
	}
	return word;
}