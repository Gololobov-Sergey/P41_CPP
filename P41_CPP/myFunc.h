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
void printArray(T* arr, int size)
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
void bubbleSort(T arr[], int size)
{
	for (size_t i = 0; i < size - 1; i++)
	{
		for (size_t j = 0; j < size - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
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
T* addElemArray(T* arr, int size, T elem)
{
	T* temp = new T[size + 1];
	for (size_t i = 0; i < size; i++)
	{
		temp[i] = arr[i];
	}
	temp[size] = elem;
	delete arr;
	//size++;
	return temp;
}