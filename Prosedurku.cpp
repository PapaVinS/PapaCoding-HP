#include <iostream>
#include <conio.h>

using namespace std;

///*----- prosedure ------*/
//void InputData(int *Bil)
//{
//	cin>>*Bil;
//}

/*----- function ------*/
int InputData()
{
	int Bil;
	cin>>Bil;
	return Bil;
}

///*----- prosedure ------*/
//void Jumlah(int Bil1,int Bil2,int *Hasil)
//{
//	*Hasil = Bil1 + Bil2;
//}

/*----- function ------*/
int Jumlah(int Bil1,int Bil2)
{
	int Hasil;
	Hasil = Bil1 + Bil2;
	return Hasil;
}

void Cetak(int Hasil)
{
	cout<<"Hasil : "<<Hasil;
}
	

main()
{
	int X,Y,Z;
	puts("PROGRAM PENJUMLAHAN");
	puts("-------------------");
	cout<<"Input Bilangan Pertama : ";
	//InputData(&X);
	X = InputData();
	cout<<"Input Bilangan Kedua   : ";
	//InputData(&Y);
	Y = InputData();
	//Jumlah(X,Y,&Z);
	Z = Jumlah(X,Y);
	Cetak(Z);

	_getch();
}