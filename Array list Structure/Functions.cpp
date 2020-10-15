#include "List.h"
#include<iostream>

using namespace std;

void List::createList()
{
	cout << "\n\t\t\t\t\t\t\tCreating List" << endl;

	if (max == 0)
	{
		do
		{
			cout << "\t\t\t\tEnter the maximum size of list" << endl;
			cout << "\t\t\t\t";
			cin >> max;
			x = new int[max + 1];
			if (max > 0)
			{
				cout << "\t\t\t\tYou have ceated list of \"" << max << "\" elements." << endl;
			}
			else
			{
				cout << "\t\t\t\tMaximum size of list must be greater then \"0\"" << endl;
			}
		} while (max <= 0);
	}
	else
	{
		cout << "\t\t\t\tYou already have created a list of \"" << max <<"\" elements."<< endl;
	}
}

void List::insert()
{
	cout << "\n\t\t\t\t\t\t\tInserting Value" << endl;

	if (max != 0)//if there is list
	{

		do
		{
			cout << "\n\t\t\t\tYou have " << max << " elements " << size << " have values.\n\n";
			if (size <= 0)//first value
			{
				cout << "\t\t\t\tEnter the integer value:\n";
				cout << "\t\t\t\t";
				cin >> x[CI + 1];
				CI++;
				size++;
				cout << "\t\t\t\tValue inserted.";
			}
			else
			{
				cout << "\t\t\t\tSelect how you want to enter the value: \n\t\t\t\t\t1-By Location\n\t\t\t\t\t2-By Value \n\t\t\t\t\t3- Exit";
				cout << "\n\t\t\t\t\t";

				cin >> option;

				switch (option)
				{
				case 1://by location insertion
				{
					do
					{
						cout << "\n\t\t\t\t\t\tInsertion by Location\n";
						cout << "\n\t\t\t\tSelect where you want to enter the value:" << endl;
						cout << "\t\t\t\t\t1- After the current Location \n \t\t\t\t\t2- Before the current Location \n\t\t\t\t\t3- At the current Location \n\t\t\t\t\t4- Back" << endl;
						if (size < max)
						{
							cout << "\t\t\t\t\t";
							cin >> op;
						}
						else
						{
							op = 4;
						}

						switch (op)
						{
						case 1://after the Current element
						{
							for (i = size; i >= (CI + 1); i--)
							{
								x[i + 1] = x[i];
							}
							cout << "\t\t\t\tEnter the integer value:\n";
							cout << "\t\t\t\t";
							cin >> x[CI + 1];
							CI++;
							size++;
							cout << "\t\t\t\tValue inserted.";

							break;
						}
						case 2://before the current element
						{
							for (i = size; i >= (CI + 1); i--)
							{
								x[i + 1] = x[i];
							}
							x[i + 1] = x[i];
							cout << "\t\t\t\tEnter the integer value:\n";
							cout << "\t\t\t\t";
							cin >> x[CI];
							size++;
							//CI++;
							cout << "\t\t\t\tValue inserted.";

							break;
						}
						case 3://At the current location
						{
							for (i = size; i >= (CI + 1); i--)
							{
								x[i + 1] = x[i];
							}
							cout << "\t\t\t\tEnter the integer value:\n";
							cout << "\t\t\t\t";
							cin >> x[CI];
							cout << "\t\t\t\tValue inserted.";

							//size++;
							//CI++;
							break;
						}
						case 4:
							if (size >= max)
							{
								cout << "\n\t\t\t\tYour list is full";
								//option = 3;
							}
							break;
						default:
							cout << "\n\t\t\t\tInvalid Selection, select a valid option";
						}
					} while (op != 4);
					break;
				}//case 1 by location insertion end
				case 2://by value insertion
				{
					do
					{
						cout << "\n\t\t\t\t\t\tInsertion by Value\n";
						cout << "\n\t\t\t\tSelect where you want to enter the value:" << endl;
						cout << "\t\t\t\t\t1- After the Value \n \t\t\t\t\t2- Before the Value \n\t\t\t\t\t3- Back" << endl;

						if (size < max)
						{
							cout << "\t\t\t\t\t";
							cin >> opt;
						}
						else
						{
							opt = 3;
						}

						switch (opt)
						{
						case 1://After the value
						{
							if (size == 0)
							{
								cout << "\t\t\t\tYour list is empty" << endl;
							}
							else
							{
								int j = find();
								if (j == 1)
								{
									for (i = size; i >= (CI+1); i--)
									{
										x[i + 1] = x[i];
									}
									cout << "\t\t\t\tEnter the integer value:\n";
									cout << "\t\t\t\t";
									cin >> x[CI + 1];
									CI++;
									size++;
									cout << "\t\t\t\tValue inserted.";

								}
							}
							break;
						}//case 1 end  After the Value
						case 2://before the value
						{
							if (size == 0)
							{
								cout << "\t\t\t\tYour list is empty" << endl;
							}
							else
							{
								int j = find();
								if (j == 1)
								{
									for (i = size; i >= (CI + 1); i--)
									{
										x[i + 1] = x[i];
									}
									x[i + 1] = x[i];
									cout << "\t\t\t\tEnter the integer value:\n";
									cout << "\t\t\t\t";
									cin >> x[CI];
									size++;
									CI++;
									cout << "\t\t\t\tValue inserted.";
									break;
								}
							}
							break;
						}//case 2 end  before the Value
						case 3:
						{
							if (size >= max)
							{
								cout << "\n\t\t\t\tYour list is full";
							}
							break;						
						}
						default:
							cout << "\n\t\t\t\tInvalid Selection, select a valid option";
						}//switch end
					} while (opt != 3);
					break;
				}//case 2 by value insertion end
				case 3:
				{
					break;
				}//case 3 end
				default:
					cout << "\n\t\t\t\tInvalid Selection, select a valid option";

				}//outer switch end
			}//else end
		} while (option != 3);
	}//list not created check
	else
	{
		cout<< "\t\t\t\tYou must have to create list first." << endl;
	}
}

void List::Delete()
{
	cout << "\n\t\t\t\t\t\t\tDeleting Value" << endl;

	if (max != 0)
	{
		if (size == 0)
		{
			cout << "\t\t\t\tYour list is empty" << endl;
		}
		else
		{
			cout << "\t\t\t\tSelect how you want to delete the value: \n\t\t\t\t\t1-By current Location\n\t\t\t\t\t2-By Value \n\t\t\t\t\t3- Exit";
			cout << "\n\t\t\t\t\t";
			cin >> opti;
			switch (opti)
			{
			case 1://By current Location
			{
				for (i = (CI + 1); i <= size; i++)
				{
					x[i - 1] = x[i];
				}
				size--;
				cout << "t\t\t\t\t\tYou have deleted " << x[CI] << " from element " << CI;
				break;
			}
			case 2://By Value
			{
				int j = find();
				if (j == 1)
				{
					for (i = (CI + 1); i <= size; i++)
					{
						x[i - 1] = x[i];
					}
					size--;
				}
				break;
			}
			default:
				cout << "\n\t\t\t\tInvalid Selection, select a valid option";
			}
		}
	}
	else
	{
		cout << "\t\t\t\tYou must have to create list first." << endl;
	}
}

void List::update()
{
	cout << "\n\t\t\t\t\t\t\tUpdating list" << endl;

	if (max != 0)
	{
		if (size== 0)
		{
			cout << "\t\t\t\tYour list is empty" << endl;
		}
		else
		{
			int j = find();
			if (j == 1)
			{
				cout << "\t\t\t\tEnter the integer value:\n";
				cout << "\t\t\t\t";
				cin >> x[i];
			}
		}
	}
	else
	{
		cout << "\t\t\t\tYou must have to create list first." << endl;
	}
}

void List::Start()
{
	cout << "\n\t\t\t\t\t\tIndexing 1st element" << endl;
	if (max != 0)
	{
		if (size <= 0)
		{
			cout << "\t\t\t\tYour list is empty" << endl;
		}
		else
		{
			CI = 1;
		}
	}
	else
	{
		cout << "\t\t\t\tYou must have to create list first." << endl;
	}
}

void List::next()
{
	cout << "\n\t\t\t\t\t\tIndexing Next element" << endl;
	if (max != 0)
	{
		if (size <= 0)
		{
			cout << "\t\t\t\tYour list is empty" << endl;
		}
		else
		{
			if (CI == size)
			{
				cout << "\t\t\t\tYou are on last index ";
				
			}
			else
				CI++;

		}
	}
	else
	{
		cout << "\t\t\t\tYou must have to create list first." << endl;
	}
}

void List::back()
{
	cout << "\n\t\t\t\t\t\tIndexing Previous element" << endl;
	if (max != 0)
	{
		if (size <= 0)
		{
			cout << "\t\t\t\tYour list is empty" << endl;
		}
		else
		{
			if (CI != 1)
			{
				CI--;
			}
			else
				cout << "\t\t\t\tYou are on the first index";

		}
	}
	else
	{
		cout << "\t\t\t\tYou must have to create list first." << endl;
	}
}

void List::get()
{
	cout << "\n\t\t\t\t\t\tCurrent element and value" << endl;
	if (max != 0)
	{
		if (size <= 0)
		{
			cout << "\t\t\t\tYour list is empty" << endl;
		}
		else
		{
			cout << "\t\t\t\tYour current location is " << CI << " and it contain " << x[CI] <<endl;
		}
	}
	else
	{
		cout << "\t\t\t\tYou must have to create list first." << endl;
	}
}

void List::Size()
{
	cout << "\n\t\t\t\t\t\t\tSize" << endl;
	if (max != 0)
	{
		if (size <= 0)
		{
			cout << "\t\t\t\tYour list is empty" << endl;
		}
		else
		{
			cout << "\t\t\t\tSize of your list is " << size << endl;
		}
	}
	else
	{
		cout << "\t\t\t\tYou must have to create list first." << endl;
	}
}

void List::tail()
{
	cout << "\n\t\t\t\t\t\t\tIndexing Last element" << endl;
	if (max != 0)
	{
		if (size <= 0)
		{
			cout << "\t\t\t\tYour list is empty" << endl;
		}
		else
		{
			CI=size;
		}
	}
	else
	{
		cout << "\t\t\t\tYou must have to create list first." << endl;
	}
}

int List::find()//scope resulution
{
		cout << "\n\t\t\t\t\t\t\tFinding Value" << endl;

	int flag = 0;
	if (max != 0)
	{
		if (size <= 0)
		{
			cout << "\t\t\t\tYour list is empty" << endl;
		}
		else
		{
			
			cout << "\n\t\t\t\tEnter number to find: \n";
			cout << "\t\t\t\t";
			cin >> value;
			for (i = 1; i <= size; i++)
			{
				if (value == x[i])
				{
					cout << "\t\t\t\t" << value << " is found at element " << i << "\n";
					flag = 1;
					CI = i;
					break;
				}
				else
				{
					flag = 0;
				}
			}
			if (flag == 0)
			{
				cout << "\t\t\t\t" << value << " is not found...!\n";
			}
			return flag;
		}
	}
	else
	{
		cout << "\t\t\t\tYou must have to create list first." << endl;
	}
	return flag;
};

void List::display()
{
	cout << "\n\t\t\t\t\t\t\tDisplaying List" << endl;

	if (max != 0)
	{
		if (size <= 0)
		{
			cout << "\t\t\t\tYour list is empty" << endl;
		}
		else
		{
			cout << "\n\t\t\t\tYou have " << max << " elements " << size << " have values.\n\n";
			for (i = 1; i <= size; i++)
			{
				cout << "\t\t\t\tElement " << i << " contain " << x[i] << endl;
			}

		}
	}
	else 
	{
		cout << "\t\t\t\tYou must have to create list first." << endl;
	}
}

void List::deallocate()
{
	cout << "\n\t\t\t\t\t\t\tDe-Allocating" << endl;
	if (max != 0)
	{
		delete[]x;
		size = 0;
		CI = 0;
		max = 0;
		cout << "\t\t\t\tYour memory is washed.";
	}
	else
	{
		cout << "\t\t\t\tThere is nothing to de-allocate." << endl;
	}
}

void List::exit()
{
	cout << "\n\t\t\t\t\t\t\tExiting" << endl;
	cout << "\t\t\t\tYou are exiting from List Application\n\n";
	cout << "\t\t\t\tAllah Hafiz\n";
}