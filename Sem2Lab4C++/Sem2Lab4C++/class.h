#pragma once
#include <iostream>
#include <set>
#include <iterator>
using namespace std;
class Set
{
	int element;
	set<int> set_;
	bool find_num(int);

public:
	Set();
	Set(int);
	//Plural(const Plural& other);
	set<int> GetSet();
	//void SetPlural(set<int>);
	void outputSet();
	Set operator + (const Set& other);
	Set operator * (const Set& other);
	Set operator - (const Set& other);

};