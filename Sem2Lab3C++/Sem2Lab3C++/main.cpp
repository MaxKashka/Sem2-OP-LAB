#include "Geo.h"
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Введите количество геометрических прогрессий: ";
    int count;
    cin >> count;
    Geo* elements = new Geo[count];
    inputProgressions(elements, count);
    AllLastE(elements, count);
    int index = MaxLastE(elements, count);
    cout << "Самый большой последний элемент в " << index + 1 << " геометрической прогрессии" << endl;
}