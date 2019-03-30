#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int square[100];
    int i;
    int k;

    //Perhitungan
    for (i = 0; i < 10; i++)
    {
        k = i + 1;
        square[i] = k * k;
        printf("\n Pangkat dari %d adalah %d, k, square[i]");
    }
    _getch();
}