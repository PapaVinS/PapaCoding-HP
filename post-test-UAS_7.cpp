#include <iostream>
#include <conio.h>
using namespace std;

/*---- function InputData ----*/
int InputData()
{
    int Bil;
    cin >> Bil;
    return Bil;
}

/*---- function cariFPB ----*/
int CariFPB(int Bil1, int Bil2)
{
    int i, X, Y, FPB;
    X = Bil1;
    Y = Bil2;
    i = X;
    FPB = 0;
    while (FPB == 0)
    {
        if ((X%i==0)&&(Y%i==0)) FPB = i;
        i--;
    }
}

/*---- function CariKPK ----*/
int CariKPK(int Bil1,int Bil2)
{
    int X, Y, i, KPK;
    X = Bil1;
    Y = Bil2;
    i = 1;
    KPK = 0;
    while (KPK == 0)
    {
        if ((X * i)%Y==0) KPK = X * i;
        i++;
    }
}

/*---- function CetakFPB_KPK ----*/
void Cetak(int FPB, int KPK)
{
    cout << "FPB = " << FPB << endl;
    cout << "KPK = " << KPK;
    
}

main ()
{
    int X, Y, FPB, KPK;

    cout << "Input Bilangan Pertama : ";
    X = InputData();
    cout << "Input Bilangan Kedua : ";
    Y = InputData();
    FPB = CariFPB(X,Y);
    KPK = CariKPK(X,Y);
    Cetak(FPB, KPK);

    _getch();
}

