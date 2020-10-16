
#include "Node.h"

class List {
private:
	int size;
	Node *headnode;
	Node *currentnode;
	Node *LCN;

public:
	void Insert();
	void Update();
	void Display();
	void Delete();
	void Start();
	void Next();
	void Back();
	void Tail();
	int Find();
	void Get();
	void Size();
	void Exit();
	List()
	{
		size = 0;
		headnode = nullptr;
		currentnode = nullptr;
	}
	~List()
	{

	}

};