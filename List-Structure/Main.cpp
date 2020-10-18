#include "list.h"

#include<iostream>
using namespace std;

void main()
{
	list l;
	int option;
	int j;
	cout << "\n\n\t\t\t\t\t\t\tLab Task\n";

	do {
		cout << "\n\n\t\t\t\t\t\t\tMENU\n";
		cout << "\nMenu" << endl;
		cout << "1 Create list" << endl;
		cout << "2 Insert" << endl;
		cout << "3 Delete" << endl;
		cout << "4 UpDate" << endl;
		cout << "5 Start" << endl;
		cout << "6 Next" << endl;
		cout << "7 Back" << endl;
		cout << "8 Tail" << endl;
		cout << "9 Find" << endl;
		cout << "10 Copy" << endl;
		cout << "11 Get" << endl;
		cout << "12 Size" << endl;
		cout << "13 Display" << endl;
		cout << "14. Clear" << endl;
		cout << "15 De-allocate" << endl;
		cout << "16 Exit" << endl;
		cout << "Choose an option" << endl;
		cin >> option;

		switch (option) {
		case 1:
			l.Createlist();
			break;
		case 2:
			l.Insert();
			break;
		case 3:
			l.Delete();
			break;
		case 4:
			l.UpDate();
			break;
		case 5:
			l.Start();
			break;
		case 6:
			l.Next();
			break;
		case 7:
			l.Back();
			break;
		case 8:
			l.Tail();
			break;
		case 9:
			 j=l.Find();
			break;
		case 10:
			l.Copy();
			break;
		case 11:
			l.Get();
			break;
		case 12:
			l.Size();
			break;
		case 13:
			l.Display();
			break;
		case 14:
			l.Clear();
			break;
		case 15:
			l.De_allocate();
			break;
		case 16:
			l.Exit();
			break;
		default:
			cout << "Invalid Option Choose again!" << endl;
		}
	} while (option != 16);

	system("pause");
}