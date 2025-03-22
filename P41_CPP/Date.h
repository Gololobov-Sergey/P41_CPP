#pragma once
#include<iostream>

using namespace std;

struct Date
{
	int day;
	int month;
	int year;

	void print()
	{
		if (day < 10)
			cout << "0";
		cout << day << ".";

		if (month < 10)
			cout << "0";
		cout << month << ".";

		cout << year << endl;
	}
};




