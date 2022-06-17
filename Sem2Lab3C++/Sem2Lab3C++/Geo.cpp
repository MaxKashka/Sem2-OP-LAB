#include "Geo.h"

Geo::Geo()
{
	n = 1;
	a = 1;
	q = 1;
}
int Geo::GetN()
{
	return n;
}
double Geo::GetA()
{
	return a;
}
double Geo::GetQ()
{
	return q;
}
void Geo::SetN(int n)
{
	this->n = n;
}
void Geo::SetA(double a)
{
	this->a = a;
}
void Geo::SetQ(double q)
{
	this->q = q;
}
double Geo::lastE()
{
	return a * pow(q, n - 1);
}

void inputProgressions(Geo* element, int count)
{
	for (int i = 0; i < count; i++)
	{
		double n, a, q;
		cout << endl << "Введите количество элементов геометрической прогрессии: ";
		cin >> n;
		element[i].SetN(n);
		cout << "Введите первый элемент геометрической прогрессии : ";
		cin >> a;
		element[i].SetA(a);
		cout << "Введите знаменатель прогрессии: ";
		cin >> q;
		element[i].SetQ(q);
	}
}
void AllLastE(Geo* element, int count)
{
	cout << "Последний элемент прогрессии: " << endl;
	for (int i = 0; i < count; i++)
	{
		cout << element[i].lastE() << " ";
	}
	cout << endl;
}
int MaxLastE(Geo* element, int count)
{
	double maxEl = element[0].lastE();
	int id = 0;
	for (int i = 0; i < count; i++)
	{
		if (maxEl < element[i].lastE())
		{
			maxEl = element[i].lastE();
			id = i;
		}
	}
	return id;
}