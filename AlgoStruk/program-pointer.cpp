#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int v=7, *p;
    p = &v;

    cout << "Nilai v = " <<v;
    cout << endl;
    cout << endl;
    cout << "Nilai *p = " <<*p;
    cout << endl;
    cout << endl;
    cout << "Alamatnya = " <<p;
    _getch();
}