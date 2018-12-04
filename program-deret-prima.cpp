#include <iostream>
#include <conio.h>
using namespace std;
int main()

{
 
    int batas, x, cek, i;

cout<<"\n Tampilkan Sampai Batas Atas Bilangan Prima : ";
cin>>batas;
cout<<endl;
cout<<" Deret Bilangan Prima Dari 1 - "<<batas<<" Adalah: "<<endl<<endl;
 for (x = 2; x<=batas; x++)
     {
    cek = 0;
    for (i = 2; i < x; i++)
        {
       if (x % i == 0)
       {
          cek = 1;
       }
      }
      if (cek == 0)
      {
       cout<<" "<<x<<",";
      }
   }
cout<<endl<<endl;
 cout<<"\n\n Apakah Anda Ingin Mengulang [Y/N] ? "  ;
char m ;
cin>>m;
if (m == 'y' || m== 'Y')
goto awal;
else if (m == 'n' || m== 'N')
{
goto akhir;
}
akhir:
cout<<"\n\n\t\t\t    \"TERMA KASIH\"";
getch();
}