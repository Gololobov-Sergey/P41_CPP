#pragma once
#include<iostream>
#include<iomanip>
#include<fstream>

#include"myFunc.h"

using namespace std;


struct Book
{
	char* name;
	char* author;
	char* date;
	int page;

	void print()
	{
		cout << setw(20) << left << name << setw(15) << author << setw(12) << date << setw(6) << page << endl;
	}
};

struct Library
{
	Book* library = nullptr;
	int size = 0;

	void print()
	{
		for (size_t i = 0; i < size; i++)
		{
			library[i].print();
		}
	}

	void createBook(istream& in)
	{
		Book b;
		
		char buff[80];
		while (in.getline(buff, 80))
		{
			b.name = new char[strlen(buff) + 1];
			strcpy_s(b.name, strlen(buff) + 1, buff);

			in.getline(buff, 80);
			b.author = new char[strlen(buff) + 1];
			strcpy_s(b.author, strlen(buff) + 1, buff);

			in.getline(buff, 80);
			b.date = new char[strlen(buff) + 1];
			strcpy_s(b.date, strlen(buff) + 1, buff);

			in >> b.page;
			in.get();

			addElemArray(library, size, b);

		}
	}


	void load()
	{
		ifstream fin("text.txt");
		createBook(fin);
	}

	void add()
	{
		
		createBook(cin);
	}


	void add(Book item)
	{
		addElemArray(library, size, item);
	}


	void edit()
	{
		int  i;
		cin >> i;
		edit(i);
	}

	void edit(int index)
	{
		if (index >= 0 && index < size)
		{
			int c;

			cout << "Name(1), Author(2), Date(3), Amount of pages(4)" << endl;
			cout << "Choose what to edit:";
			cin >> c;
			cin.ignore();
			char buff[100];
			switch (c)
			{
			case 1:
				cout << "Editing (" << library[index].name << ") = ";
				cin.getline(buff, 100);
				delete library[index].name;
				library[index].name = new char[strlen(buff) + 1];
				strcpy_s(library[index].name, strlen(buff) + 1, buff);
				break;
			case 2:
				cout << "Editing (" << library[index].author << ") = ";
				cin.getline(buff, 100);
				delete library[index].author;
				library[index].author = new char[strlen(buff) + 1];
				strcpy_s(library[index].author, strlen(buff) + 1, buff);
				break;
			case 3:
				cout << "Editing (" << library[index].date << ") = ";
				cin.getline(buff, 100);
				delete library[index].date;
				library[index].date = new char[strlen(buff) + 1];
				strcpy_s(library[index].date, strlen(buff) + 1, buff);
				break;
			case 4:
				cout << "Editing (" << library[index].page << ") = ";
				cin >> library[index].page;
				cin.ignore();
				break;
			}
		}
	}

	void save()
	{
		ofstream out("text.txt");
		for (size_t i = 0; i < size; i++)
		{
			out << library[i].name << endl;
			out << library[i].author << endl;
			out << library[i].date << endl;
			out << library[i].page << endl;
		}
	}
};
