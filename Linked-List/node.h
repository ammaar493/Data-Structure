#pragma once
class Node
{
public:
	int object;
	Node *next;


public:

	int getobject()
	{
		return object;
	}
	void setobject(int object)
	{
		this->object = object;
	}
	Node *getNext()
	{
		return next;
	}
	void setNext(Node *next)
	{
		this->next = next;
	}

	Node()//constructor
	{
		next = nullptr;
		object = 0;
	}
	~Node()//destructor
	{

	}

};