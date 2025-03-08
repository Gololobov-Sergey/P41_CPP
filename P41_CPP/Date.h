#pragma once

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




struct Human
{
	char* name;
	Date birthDay;

	void setName()
	{
		char buff[20];
		cout << "Name: ";
		cin.getline(buff, 20);

		name = new char[strlen(buff) + 1];
		strcpy_s(name, strlen(buff) + 1, buff);
	}

	void print()
	{
		cout << "Name : " << name << endl;
		cout << "BD   : ";
		birthDay.print();
	}
};