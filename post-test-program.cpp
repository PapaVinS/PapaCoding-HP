#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

int main()

{
    char menu;
    
    cout << "-----------------------" << endl;
    cout << "Nama : Raditya" << endl;
    cout << "NIM  : 228" << endl;
    cout << "Menu Program :" << endl;
    cout << "1. Menghitung Faktorial\n";
    cout << "2. Binary to Decimal\n";
    cout << "3. Check Bilangan Prima\n";
    cout << "4. Deret Bilangan Prima\n";
    cout << "5. Tutup Program\n";
    cout << "-----------------------";
    cout << "\n\n";
    cout << "INPUT PILIHAN ANDA = ";
    cin >> menu;

switch(menu){
    case '1': 
    int b,c;
        cout<<"masukkan bilangan yang akan difaktorialkan: ";
        cin>>b;
        c=b;
        cout<<"bilangan ="<<b<<endl;
        cout<<b<<"! = ";
        for(int i=1;i<=b;i++){
            cout<<i;
        if(i==b){
            cout<<" =";
        }else{
            cout<<"*";
        }
    }
    //count start
        for(int i=1;b>i;){
            b=b-1;
            c=c*b;
    }
    //count end
        cout<<c;
            return 0;
    break;

    case '2':{
        long bin, dec = 0, rem, num, base = 1;
        cout << "Enter the binary number : ";
        cin >> num;
        bin = num;
        while (num > 0)
        {
            rem = num % 10;
            dec = dec + rem * base;
            base = base * 2;
            num = num / 10;
        }
        cout << "The decimal equivalent of " << bin << " : " << dec << endl;
        return 0;

        break;
    }
    case '3':   
        int bil, jum, i;
            cout << "Masukkan bilangan bulat positif : ";
            cin >> bil;
            jum = 0;
    for (i=1; i<=bil; i++)
        if (bil%i==0)
            jum++;
            if (jum==2)
                cout << "Bilangan tersebut adalah bilangan prima \n";
            else
                cout << "Bukan bilangan prima \n";
            return 0;
    break;

    case '4':

    int batas, x, cek;

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
    return 0;
    break;

    case '5':
    return 0;
    }    
}

