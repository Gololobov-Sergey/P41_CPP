#pragma once
#include "Menu.h"

int idCount = 0;

struct Account
{
	char name[4];
	float balance = 0;
	char number[17];

	void print()
	{
		cout << name << " " << number << " " << setw(6) << balance << endl;
	}

	void addSumm()
	{
		system("cls");
		cout << "Внесення коштів" << endl;
		int sum;
		cout << "Введіть суму : ";
		cin >> sum;
		balance += sum;
		cout << "Кошти внесені на рахунок" << endl;
		system("pause");
	}

	void withDraw()
	{
		system("cls");
		cout << "Зняття коштів" << endl;
		int sum; 
		cout << "Введіть суму : ";
		cin >> sum;
		if (balance - sum < 0)
		{
			SetColor(LightRed, Black);
			cout << "Не достатньо коштів!!!" << endl;
			SetColor(LightGray, Black);
		}
		else
		{
			balance -= sum;
			cout << "Кошти зняті з рахунку" << endl;
		}
		system("pause");
	}

	void menu()
	{
		while (true)
		{
			system("cls");
			cout << " --- Меню рахунку ---" << endl;
			cout << endl;
			print();
			cout << endl;
			cout << "1. Внесення коштів" << endl;
			cout << "2. Зняття коштів" << endl;
			cout << "3. Вихід" << endl;
			int choice;
			cin >> choice;
			cin.ignore();
			switch (choice)
			{
			case 1: addSumm(); break;
			case 2: withDraw(); break;
			case 3: return;
			default: break;
			}

		}
	}
};

struct Client
{
	int id;
	char* name;
	Account* accounts = nullptr;
	int size = 0;

	void addAccount()
	{
		system("cls");
		cout << "Відкриття нового рахунку" << endl;
		cout << "------------------------" << endl;
		Account account;
		cout << "Виберіть валюту :" << endl;
		cout << "1. UAH\n2. USD\n3. EUR\n";
		int c;
		cin >> c;
		cin.ignore();
		switch (c)
		{
		case 1: strcpy_s(account.name, 4, "UAH"); break;
		case 2: strcpy_s(account.name, 4, "USD"); break;
		case 3: strcpy_s(account.name, 4, "EUR"); break;
		default: strcpy_s(account.name, 4, "---"); break;
		}
		for (size_t i = 0; i < 16; i++)
		{
			account.number[i] = rand() % 10 + '0';
		}
		account.number[16] = '\0';

		addElemArray(accounts, size, account);

		cout << "Рахунок відкрито :" << endl;
		account.print();
		system("pause");
	}

	void printAccounts()
	{
		system("cls");
		SetColor(LightRed, Black);
		cout << "Стан рахунків " << name << endl;
		cout << "------------------------" << endl;
		SetColor(LightGray, Black);
		for (size_t i = 0; i < size; i++)
		{
			accounts[i].print();
		}
		system("pause");
	}

	void workWithAccount()
	{
		system("cls");
		cout << "Вибір рахунка" << endl;
		for (size_t i = 0; i < size; i++)
		{
			cout << i + 1 << " ";
			accounts[i].print();
		}
		int choice;
		cout << "Номер рахунку : ";
		cin >> choice;
		cin.ignore();
		accounts[choice - 1].menu();
	}

	void menu()
	{
		while (true)
		{
			system("cls");
			cout << " --- Меню клієнта ---" << endl;
			cout << "1. Відкрити рахунок" << endl;
			cout << "2. Стан рахунків" << endl;
			cout << "3. Працювати з рахунком" << endl;
			cout << "4. Вихід" << endl;
			int choice;
			cin >> choice;
			cin.ignore();
			switch (choice)
			{
			case 1: addAccount(); break;
			case 2: printAccounts(); break;
			case 3: workWithAccount(); break;
			case 4: return;

			default:
				break;
			}

		}
	}
	void print()
	{
		cout << setw(3) << id << ". " << name << endl;
	}
};


struct Bank
{
	Client* clients = nullptr;
	int size = 0;

	void addClients()
	{
		system("cls");
		cout << "Створення нового клієнта" << endl;
		cout << "------------------------" << endl;
		Client client;
		client.id = ++idCount;
		char buff[50];
		cout << "Ім'я : ";
		cin.getline(buff, 50);
		client.name = new char[strlen(buff) + 1];
		strcpy_s(client.name, strlen(buff) + 1, buff);
		addElemArray(clients, size, client);
		cout << "Клієнт створений" << endl;
		system("pause");
	}

	void selectClients()
	{
		system("cls");
		cout << "--- Вибір клієнта ---" << endl;
		for (size_t i = 0; i < size; i++)
		{
			clients[i].print();
		}
		cout << "-------------------------" << endl;
		int choice;
		cout << "Номер клієнта : ";
		cin >> choice;
		cin.ignore();
		clients[choice - 1].menu();
	}

	void printClients()
	{
		system("cls");
		cout << "------- Клієнти -----" << endl;
		for (size_t i = 0; i < size; i++)
		{
			clients[i].print();
		}
		cout << endl;
		system("pause");
	}

	void menu()
	{
		while (true)
		{
			system("cls");
			cout << " --- Головне Меню ----" << endl;
			
			int c = Menu::select_vertical({ "Створити клієнта" , "Вибрати клієнта", "Надрукувати клієнтів", "Вихід" }, HorizontalAlignment::Left, 2);
			
			/*cout << "1. Створити клієнта" << endl;
			cout << "2. Вибрати клієнта" << endl;
			cout << "3. Надрукувати клієнтів" << endl;
			cout << "4. Вихід" << endl;*/
			/*int choice;
			cin >> choice;
			cin.ignore();*/
			switch (c)
			{
			case 0: addClients(); break;
			case 1: selectClients(); break;
			case 2: printClients(); break;
			case 3: exit(0); break;

			default:
				break;
			}

		}
	}
};
