#include "Human.h"
#include<iostream>

using namespace std;

void Human::setName()
{
	char buff[20];
	cout << "Name: ";
	cin.getline(buff, 20);

	name = new char[strlen(buff) + 1];
	strcpy_s(name, strlen(buff) + 1, buff);
}

void Human::print()
{
	cout << "Name : " << name << endl;
	cout << "BD   : ";
	birthDay.print();
}
