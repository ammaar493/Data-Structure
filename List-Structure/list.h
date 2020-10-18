class list {

	int *x;
	int max;
	int i;
	int size;
	int CI;
	int Ch;

public: 
	void Createlist();
	void Insert();
	void Delete();
	void UpDate();
	void Start();
	void Next();
	void Back();
	void Tail();
	int Find();
	void Copy();
	void Get();
	void Size();
	void Display();
	void Clear();
	void De_allocate();
	void Exit();
	int Check_1();

	list()
	{
		x = nullptr;
		max = 0;
		size = 0;
		CI = 0;
	}
	~list() //distructor
	{

	}

};