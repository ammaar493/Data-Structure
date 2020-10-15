#include "List.h"
#include<iostream>
using namespace std;

int main()
{
	int option;
	List L;
	//		Title box
	{
		cout << "\n\n\t\t\t******************************Assignment 01******************************\n";
		cout << "\t\t\t*\t\t\t\t\t\t\t\t\t*\n";
		cout << "\t\t\t*\t\t\t\t\t\t\t\t\t*\n";
		cout << "\t\t\t*\tImplementation of List Data Structure using Dynamic Array\t*\n";
		cout << "\t\t\t*\t\t\t\t\t\t\t\t\t*\n";
		cout << "\t\t\t*\tGroup Members:\t\t\t\t\t\t\t*\n";
		cout << "\t\t\t*\t\t\t\t\t\t\t\t\t*\n";
		cout << "\t\t\t*\t1- AMMAAR AKHTAR (1869) \t2- RAFAQAT ALI (1871)\t\t*\n";
		cout << "\t\t\t*\t3- SHAROZE ZAFAR (1885)\t\t\t\t\t\t*\n";
		cout << "\t\t\t*\t\t\t\t\t\t\t\t\t*\n";
		cout << "\t\t\t*\t\t\t\t\t\t\t\t\t*\n";
		cout << "\t\t\t*************************************************************************\n";
	}
	do
	{
		//		Menu box
		{
			cout << "\n\t\t\t\t***************************Menu**************************\n";
			cout << "\t\t\t\t*\t\t\t\t\t\t\t*\n";
			cout << "\t\t\t\t*\t\t\t\t\t\t\t*\n";
			cout << "\t\t\t\t*\t1- Create List \t\t 2- Insertion\t\t*\n";
			cout << "\t\t\t\t*\t3- Deletion \t\t 4- Update\t\t*\n";
			cout << "\t\t\t\t*\t5- Start \t\t 6- Next\t\t*\n";
			cout << "\t\t\t\t*\t7- Back \t\t 8- Tail\t\t*\n";
			cout << "\t\t\t\t*\t9- Find \t\t 10- Get\t\t*\n";
			cout << "\t\t\t\t*\t11- Size \t\t 12- Display List\t*\n";
			cout << "\t\t\t\t*\t13- De-allocate List \t 14- Exit\t\t*\n";
			cout << "\t\t\t\t*\t\t\t\t\t\t\t*\n";
			cout << "\t\t\t\t*\t\t\t\t\t\t\t*\n";
			cout << "\t\t\t\t*********************************************************\n";
		}

		cout << "\t\t\t\tPlease choose an option:\n";
		cout << "\t\t\t\t";
		cin >> option;

		switch (option)
		{
		case 1:
			L.createList();
			break;
		case 2:
			L.insert();
			break;
		case 3:
			L.Delete();
			break;
		case 4:
			L.update();
			break;
		case 5:
			L.Start();
			break;
		case 6:
			L.next();
			break;
		case 7:
			L.back();
			break;
		case 8:
			L.tail();
			break;
		case 9:
			L.find();
			break;
		case 10:
			L.get();
			break;
		case 11:
			L.Size();
			break;
		case 12:
			L.display();
			break;
		case 13:
			L.deallocate();
			break;
		case 14:
			L.exit();
			break;

		default:
			system("CLS");
			cout << "\n\t\t\t\tInvalid Selection, select a valid option";
		}

	} while (option != 14);
	
	cout << "\n\n\n\n\n\n\n\t\t\t\t";
	system("pause");
}