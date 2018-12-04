#include <iostream>
#include <math.h>
using namespace std;

main ()
{
	float suhu, hasil;
	char menu;

	cout<<"Konversi Suhu"<<endl;
	cout<<"Masukan Nilai Suhu = ";
	cin>>suhu;
	cout<<"Menu : "<<endl;
	cout<<"A.Celcius ke Fahrenheit\n";
	cout<<"B.Fahrenheit ke Celcius\n";
	cout<<"C.Celcius ke Reamur\n";
	cout<<"D.Reamur ke Celcius\n";
	cout<<"E.Farenheit ke Reamur\n";
	cout<<"F.Reamur ke Farenheit\n";
	cout<<"\n\n";
	cout<<"Pilih menu(A,B,C,D,E,F) = ";
	cin>> menu;
switch(menu){
	case 'A':
	case 'a':
		hasil = suhu * 1.8 +32;
		cout<< "Suhu " <<suhu<< " Celcius Ke Fahrenheit = " <<hasil<<endl;
		break;
	case 'B':
	case 'b':
		hasil = (suhu - 32) / 1.8;
		cout<< "Suhu " <<suhu<< " Fahrenheit Ke Celcius = " <<hasil<<endl;
		break;
	case 'C':
	case 'c':
		hasil = 0.8 * suhu;
		cout<< "Suhu " <<suhu<< " Celcius Ke Reamur = " <<hasil<<endl;
		break;
	case 'D':
	case 'd':
		hasil = suhu / 0.8;
		cout<< "Suhu " <<suhu<< " Reamur Ke Celcius = " <<hasil<<endl;
		break;
	case 'E':
	case 'e':
		hasil = (suhu - 32) / 2.25;
		cout<< "Suhu " <<suhu<< " Fahrenheit Ke Reamur = " <<hasil<<endl;
		break;
	case 'F':
	case 'f':
		hasil = suhu * 2.25 + 32;
		cout<< "Suhu " <<suhu<< " Reamur Ke fahrenheit = " <<hasil<<endl;
		break;
	default:
		cout<< "Yang Anda Pilih Tidak Ada di Menu Pilihan" <<endl;
	}
}
