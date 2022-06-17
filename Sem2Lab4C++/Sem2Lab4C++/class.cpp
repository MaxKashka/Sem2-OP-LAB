#include "class.h"
Set::Set()
{
	element = 0;
	set_ = {};
}
Set::Set(int count)
{
	cout << "Enter the number of elements of the set: ";
	cin >> count;
	cout << "Enter " << count << " elements of the set: " << endl;
	for (int i = 0; i < count; i++)
	{
		cin >> element;
		if (!find_num(element))
		{
			set_.insert(element);
		}
		else
		{
			cout << "The number is already in the plural. Try again: ";
			cin >> element;
			set_.insert(element);
		}

	}
}

set<int> Set::GetSet()
{
	return set_;
}

void Set::outputSet()
{
	copy(set_.begin(), set_.end(), ostream_iterator<int>(cout, " "));
}

Set Set:: operator +(const Set& other)
{
	Set C;
	set<int>::iterator it;
	for (it = other.set_.begin(); it != other.set_.end(); it++)
	{

		this->set_.insert(*it);

	}
	set<int>::iterator it1;
	for (it1 = this->set_.begin(); it1 != this->set_.end(); it1++)
	{

		C.set_.insert(*it1);

	}
	cout << endl << "Operator + :" << endl;
	C.outputSet();
	return C;
}
Set Set:: operator *(const Set& other)
{
	Set C;
	set<int>::iterator it1;
	set<int>::iterator it2;

	for (it1 = other.set_.begin(); it1 != other.set_.end(); it1++)
	{
		for (it2 = this->set_.begin(); it2 != this->set_.end(); it2++)
		{
			if (*it2 == *it1)
			{
				C.set_.insert(*it1);
			}
		}
	}
	cout << endl << "Operator * :" << endl;
	C.outputSet();
	return C;
}
Set Set:: operator -(const Set& other)
{
	Set C;
	set<int>::iterator it;
	set<int>::iterator it1;
	for (it1 = this->set_.begin(); it1 != this->set_.end(); it1++)
	{

		C.set_.insert(*it1);

	}
	for (it = other.set_.begin(); it != other.set_.end(); it++)
	{
		C.set_.erase(*it);
	}

	cout << endl << "Operator - :" << endl;
	C.outputSet();
	return C;
}

bool Set::find_num(int element)
{
	set<int>::iterator it;
	for (it = set_.begin(); it != set_.end(); it++)
	{
		if (*it == element)
		{
			return true;
		}
	}

	return false;
}