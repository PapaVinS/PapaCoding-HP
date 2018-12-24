#include<iostream>
#include<conio.h>
using namespace std;

void main()
{
int bil1=0;
cout<<”              Latihan Perulangan C++ dengan While             “<<endl;
cout<<“==============================================================”<<endl;
cout<<“1.Menampilkan deret angka 1 sampai 10                      :  “;
while(bil1<=10)
{
cout<<bil1;
bil1++;
}
cout<<endl;
int bil2=0;
cout<<“2.Menampilkan deret bilangan genap dari angka 1 sampai 10  :  “;
while(bil2<10)
{
bil2=bil2+2;
cout<<bil2;
}
int bil3=0;
cout<<endl;
cout<<“3.Menampilkan deret bilangan ganjil dari angka 1 sampai 10 :  “;
while(bil3<10)
{
bil3=bil3+1;
cout<<bil3;
bil3++;
}
getch();
}