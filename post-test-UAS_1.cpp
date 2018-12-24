#include <iostream>
#include <conio.h>
using namespace std;

main()

{
    float alas, tinggi, luas;
    cout << "PROGRAM SEGITIGA SIKU - SIKU" << endl;
    cout << "----------------------------" << endl;
    cout << "Masukkan nilai Alas : ";
    cin >> alas;
    cout << "Masukkan nilai Tinggi : ";
    cin >> tinggi;
    luas = (alas * tinggi) / 2;
    cout << "Luas segitiga : " << luas;
    _getch();
}