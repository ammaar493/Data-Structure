#include "list.h"
#include<iostream>

using namespace std;


void List::Insert() {
	int a; Node *newNode = new Node();
	if (size != 0) {
		cout << "\t\t\t\tChoose Option" << endl;
		cout << "\t\t\t\t1. After" << endl;
		cout << "\t\t\t\t2. Before" << endl;
		cin >> a;
		switch (a)
		{
		case 1:
			int x;
			cout << "\t\t\t\tEnter the value" << endl;
			cin >> x;
			newNode->setobject(x);
			if (headnode == nullptr)
			{
				headnode = newNode;
				currentnode = newNode;
				LCN = newNode;
				newNode->setNext(nullptr);
			}
			else if (currentnode->getNext() == nullptr) {
				currentnode->setNext(newNode);
				LCN = currentnode;
				currentnode = newNode;
				currentnode->setNext(nullptr);
			}
			else
			{
				newNode->setNext(currentnode->getNext());
				LCN = currentnode;
				LCN->setNext(newNode);
				currentnode = newNode;
			}
			size++;
			cout << "\t\t\t\t***New Node Has been Inserted***" << endl;
			break;
		case 2:
			if (size != 0) {
				int x;
				cout << "\t\t\t\tEnter the value" << endl;
				cin >> x;
				if (currentnode != headnode) {
					newNode->setobject(x);
					newNode->setNext(currentnode);
					LCN->setNext(newNode);
					currentnode = newNode;
				}
				else {
					newNode->setobject(x);
					newNode->setNext(currentnode);
					headnode = newNode;
					currentnode = newNode;
					LCN = newNode;
				}
				cout << "\t\t\t\t***New Node Has been Inserted***" << endl;
				size++;
			}
			else
				cout << "\t\t\t\tYou cant perform this action, without any Node" << endl;
		}


	}
	else {
		int x;
		cout << "\t\t\t\tEnter the value" << endl;
		cin >> x;
		newNode->setobject(x);
		if (headnode == nullptr)
		{
			headnode = newNode;
			currentnode = newNode;
			LCN = newNode;
			newNode->setNext(nullptr);
		}
		else if (currentnode->getNext() == nullptr) {
			currentnode->setNext(newNode);
			LCN = currentnode;
			currentnode = newNode;
			currentnode->setNext(nullptr);
		}
		else
		{
			newNode->setNext(currentnode->getNext());
			LCN = currentnode;
			LCN->setNext(newNode);
			currentnode = newNode;
		}
		size++;
		cout << "\t\t\t\t***New Node Has been Inserted***" << endl;
	}

};
//Display Method
void List::Display() {
	if (size != 0) {
		Node *temp = headnode;
		int i = 1;
		while (temp != nullptr) {
			cout << "\t\t\t\tNode " << i << " and its Value is " << temp->getobject() << endl;
			temp = temp->getNext();
			i++;
		}
	}
	else
		cout << "\t\t\t\tYou cant perform this action, without any Node" << endl;
};
//Delete Method
void List::Delete() {
	if (size != 0)
	{
		int flag = Find();
		if (flag == 1)
		{
			if (currentnode == headnode) {
				headnode = headnode->getNext();
				delete currentnode;
				LCN = headnode;
				size--;
			}
			else if (currentnode->getNext() == nullptr) {
				delete currentnode;
				LCN->setNext(nullptr);
				Back();
				size--;
			}
			else {
				LCN->setNext(currentnode->getNext());
				delete currentnode;
				currentnode = LCN->getNext();
				size--;
			}
			cout << "\t\t\t\t***Node has Been Deleted***" << endl;
		}
	}
	else
		cout << "\t\t\t\tYou cant perform this action, without any Node" << endl;
};
//Update Method
void List::Update() {
	int f = Find();
	int x;
	if (f == 1) {
		cout << "\t\t\t\tEnter New Value That you want to replace:";
		cin >> x;
		cout << "\t\t\t\t*** " << currentnode->getobject() << " Has been Updated Successfully***";
		currentnode->setobject(x);

	}
};
//Start Method
void List::Start() {
	if (size != 0) {
		currentnode = headnode;
		LCN = headnode;
		cout << "\t\t\t\tYou are On HeadNode" << endl;
	}
	else
		cout << "\t\t\t\tNo Node Exist In List ,Kindly Create at least one Node" << endl;

};
//Next Method
void List::Next() {
	if (size != 0) {
		if (currentnode->getNext() != nullptr) {
			LCN = currentnode;
			currentnode = currentnode->getNext();
			cout << "\t\t\t\t***You Are On Next Node***" << endl;
		}
		else
			cout << "\t\t\t\t***You Are On Last Node***" << endl;
	}
	else
		cout << "\t\t\t\tYou cant perform this action, without any Node" << endl;



};
//Back Method
void List::Back() {
	if (size != 0) {
		Node *temp = headnode;
		Node *ltemp = headnode;
		while (temp != LCN)
		{
			ltemp = LCN;
			temp = temp->getNext();
		}
		currentnode = temp;
		LCN = ltemp;
		cout << "\t\t\t\t***On BacK Node Successfull..***" << endl;
		/*if (currentnode = headnode) {
			cout << "***You cant go back further..***" << endl;
		}*/
		
	}
	else
		cout << "\t\t\t\tYou cant perform this action, without any Node" << endl;

};
//Tail Method
void List::Tail() {
	if (headnode != nullptr) {
		while (currentnode->getNext() != nullptr) {
			LCN = currentnode;
			currentnode = currentnode->getNext();
		}
		cout << "\t\t\t\t***You Are On Tail***" << endl;
	}
	else
		cout << "List or Node Is Not Created Yet" << endl;
};
//GeT Method
void List::Get() {
	if (size != 0) {
		cout << "\t\t\t\tCurrent Node Value is: " << currentnode->getobject() << endl;
	}
	else
		cout << "\t\t\t\t***You cant perform this action, without any Node***" << endl;

};
//Size Method
void List::Size() {
	cout << "\t\t\t\tSize Of Node is " << size;
};
//Find Method
int List::Find() {
	if (size != 0) {
		int flag = 0;
		int fin;
		Node *temp = headnode;
		Node *ltemp = headnode;
		cout << "\t\t\t\tEnter value:";
		cin >> fin;
		while (temp != nullptr) {
			if (temp->getobject() == fin) {
				cout << "\t\t\t\tVALUE FOUNDED" << endl;
				flag = 1;
				LCN = ltemp;
				currentnode = temp;
				break;
			}
			else {
				flag = 0;
				ltemp = temp;
				temp = temp->getNext();
			}

		}
		if (flag == 0) {
			cout << "\t\t\t\tVALUE NOT FOUNDED" << endl;
		}
		return flag;
	}
	else
		cout << "\t\t\t\tYou cant perform this action, without any Node" << endl;

};
//Exit Method
void List::Exit() {
	cout << "\n\t\t\t\t\t\t\tExiting" << endl;
	cout << "\t\t\t\tYou are exiting from List Application\n\n";
	cout << "\t\t\t\tAllah Hafiz\n";
};