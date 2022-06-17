#include "class.h"
int main()
{
	Set A(0);
	Set B(0);
	cout << endl << "Set A: ";
	A.outputSet();
	cout << endl << "Set B: ";
	B.outputSet();

	Set C = (A + B) - (A * B);

	cout << endl << "Set C: ";
	C.outputSet();
}