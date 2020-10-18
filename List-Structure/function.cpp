#include "list.h"
#include<iostream>

using namespace std;

void list :: Createlist()
{
	cout << "Enter the max size of list" << endl;
	cin >> max;
	x = new int[max+1];
	size = max;
	cout << "You have ceated list of ",size;
}
void list::Insert()
{
	int op;
	int lm;
	Ch = Check_1();
	if (Ch != 0)
	{


		cout << "\t\tInsert Menu\n";
		cout << "1.by location\n";
		cout << "2.by value\n";
		cin >> op;

		switch (op)
		{
		case 1://by location
			cout << "\t\tby location menu\n";
			cout << "1. After\n";
			cout << "2. Before\n";
			cout << "3. At\n";
			cin >> lm;
			switch (lm)
			{
			case 1://after
				for (i = size; i >= (CI + 1); i--)
					x[i + 1] = x[i];
				cout << "Enter value to enter in array:\n";
				cin >> x[CI + 1];
				CI++;
				size++;
				break;

			case 2://before
				
				cout << "Enter value to enter in array:\n";
				cin >> x[CI - 1];
				CI++;
				size++;
				break;
			case 3://at
				cout << "Enter value to enter in array:\n";
				cin >> x[CI];
				CI++;
				size++;
				break;
			}
		case 2://by value
		}

	}
}
void list::Delete()
{
	int j = Find();
	if (j == 1)
	{
		for (i = (CI + 1);i <= size;i++)
		{
			x[i - 1] = x[i];
			size--;
		}
	}
}
void list::UpDate()
{
	cout << "Update";
}
void list::Start()
{
	CI = 1;
}
void list::Next()
{
	if (CI = size)
	{
		CI++;
	}
	else
		cout << "You are on last index ";
}
void list::Back()
{
	if (CI != 1)
	{
		CI--;
	}
	else
		cout << "You are on index 1....!";
}
void list::Tail()
{
	CI = size;
}
int list::Find()//scope resulution
{
	int value;
	int flag;
	cout << "Enter number to find: \n";
	cin >> value;
	for (i = 1;i<=size;i++)
	{
		if (value == x[i])
		{
			cout << "This value is found...!";
			flag = 1;
			CI = i;
			break;
		}
		else
			flag = 0;
	}
	if (flag == 0)
	{
		cout << "This value is not found...!";
	}
	return flag;
}
void list::Copy()
{
	cout << "Copy Method is not available...!";
}
void list::Get()
{
	cout << "Location is " << CI << " and its value is " << x[CI];
}
void list::Size()
{
	cout << "The size of array is :"<<size;
}
void list::Display()
{
	if (max != 0)
	{
		for (i = 1; i <= size; i++)
		{
			cout << "Value of " << i << " element " << x[i] << " and its location is " << i << endl;
		}
	}
	else
		cout << "Arry is empty...!";
}
void list::De_allocate()
{
	if (max == 0)
		cout << "Array is not available";
	else
	{
		delete[]x;
		size = 0;
		CI = 0;
		max = 0;
		cout << "You have lost memory";

	}
}
void list::Clear()
{
	size = 0;
	CI = 0;
}
void list::Exit()
{
	cout << "Allah Hafiz\n";
}

int list::Check_1()
{
	int a;
	if (max == 0)
	{
		a = 0;
	}
	else
		a = 1;
	return a;
}