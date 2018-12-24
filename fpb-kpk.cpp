#include <iostream>
#include <conio.h>
using namespace std;

main()
{
    int X, Y, FPB, KPK, i;

    cout << "Input Bilangan Pertama : ";
    cin >> X;
    cout << "INput Bilangan Kedua : ";
    cin >> Y;
    
    i = X;
    FPB = 0;
    while(FPB == 0)
    {
        if ((X%i==0)&&(Y%i==0)) FPB = i;
        i--;
    }

    i = 1;
    KPK = 0;
    while (KPK == 0)
    {
        if ((X*i)%Y==0) KPK = X*i;
        i++;
    }

    cout << "FPB = " << FPB << endl;
    cout << "KPK = " << KPK;
    _getch();
}