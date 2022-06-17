#pragma once
#include <iostream>
using namespace std;
class Geo
{
	double n;
	double a;
	double q;
public:
	Geo();
	int GetN();
	double GetA();
	double GetQ();
	void SetN(int n);
	void SetA(double a);
	void SetQ(double q);
	double lastE();
};
void inputProgressions(Geo*, int);
void AllLastE(Geo*, int);
int MaxLastE(Geo*, int);
