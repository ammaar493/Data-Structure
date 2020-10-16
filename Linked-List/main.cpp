#include "list.h"
#include "node.h"
#include<iostream>
using namespace std;

void main()
{
	List l;
	int option;
	int j;
	{
		cout << "\n\n\t\t\t******************************Assignment 02******************************\n";
		cout << "\t\t\t*\t\t\t\t\t\t\t\t\t*\n";
		cout << "\t\t\t*\t\t\t\t\t\t\t\t\t*\n";
		cout << "\t\t\t*\tImplementation of List Data Structure using Linked List\t*\n";
		cout << "\t\t\t*\t\t\t\t\t\t\t\t\t*\n";
		cout << "\t\t\t*\tGroup Members:\t\t\t\t\t\t\t*\n";
		cout << "\t\t\t*\t\t\t\t\t\t\t\t\t*\n";
		cout << "\t\t\t*\t1- AMMAAR AKHTAR (1869) \t2- RAFAQAT ALI (1871)\t\t*\n";
		cout << "\t\t\t*\t3- SHAROZE ZAFAR (1885)\t\t\t\t\t\t*\n";
		cout << "\t\t\t*\t\t\t\t\t\t\t\t\t*\n";
		cout << "\t\t\t*\t\t\t\t\t\t\t\t\t*\n";
		cout << "\t\t\t*************************************************************************\n";
	}
	do {

		{
			cout << "\n\t\t\t\t***************************Menu**************************\n";
			cout << "\t\t\t\t*\t\t\t\t\t\t\t*\n";
			cout << "\t\t\t\t*\t\t\t\t\t\t\t*\n";
			cout << "\t\t\t\t*\t1- Insertion \t\t 2- Deletion\t\t*\n";
			cout << "\t\t\t\t*\t3- Update \t\t 4- Start\t\t*\n";
			cout << "\t\t\t\t*\t5- Next \t\t 6- Back\t\t*\n";
			cout << "\t\t\t\t*\t7- Tail \t\t 8- Find\t\t*\n";
			cout << "\t\t\t\t*\t9- Get \t\t\t 10- Size\t\t*\n";
			cout << "\t\t\t\t*\t11- Display List \t 12- Exit\t\t*\n";
			cout << "\t\t\t\t*\t\t\t\t\t\t\t*\n";
			cout << "\t\t\t\t*\t\t\t\t\t\t\t*\n";
			cout << "\t\t\t\t*********************************************************\n";
		}


		cout << "\n\t\t\t\tChoose an option" << endl;
		cout << "\t\t\t\t";
		cin >> option;

		switch (option) {
		case 1:
			l.Insert();
			break;
		case 2:
			l.Delete();
			break;
		case 3:
			l.Update();
			break;
		case 4:
			l.Start();
			break;
		case 5:
			l.Next();
			break;
		case 6:
			l.Back();
			break;
		case 7:
			l.Tail();
			break;
		case 8:
			j = l.Find();
			break;
		case 9:
			l.Get();
			break;
		case 10:
			l.Size();
			break;
		case 11:
			l.Display();
			break;
		case 12:
			l.Exit();
			break;
		default:
			cout << "Invalid Option Choose again!" << endl;
		}
	} while (option != 12);



	cout << "\n\n\n\n\n\n\n\t\t\t\t";
	system("pause");
}