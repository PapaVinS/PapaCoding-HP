#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    cout << "Menampilkan Deret Bilangan Ganjil 7 9 11 13 15 17 19 \n";
    for (int ganjil = 7; ganjil <= 19; ganjil++)
    if (ganjil % 2 == 1) {
        cout << ganjil <<" ";
    }
}