#pragma once
class List {
	int option;
	int opt;
	int opti;
	int *x;
	int max;
	int size;
	int CI;
	int op;
	int i;
	int value;
	

public:
	void createList();
	void insert();
	void Delete();
	void update();
	void Start();
	void next();
	void back();
	void tail();
	int find();
	void get();
	void Size();
	void display();
	void deallocate();
	void exit();

	List()
	{
		x = nullptr;
		max = 0;
		size = 0;
		CI = 0;
	}
	~List() //destructor
	{

	}
};