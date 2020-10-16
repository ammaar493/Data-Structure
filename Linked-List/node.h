#pragma once
class Node
{
public:
	int object;
	Node *next;
	Node *pre;


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
	Node *getPre()
	{
		return pre;
	}
	void setNext(Node *next)
	{
		this->next = next;
	}
	void setPre(Node *pre)
	{
		this->pre = pre;
	}

	Node()//constructor
	{
		next = nullptr;
		pre = nullptr;
		object = 0;
	}
	~Node()//destructor
	{

	}

};