#include<iostream>
using namespace std;
main()
{
	const float PI = 3.14;
	float volume,luas,jari_jari,tinggi;
	cout<<"Masukan jari jari: ";
	cin>>jari_jari;
	cout<<"Masukan tinggi: ";
	cin>>tinggi;
	volume = PI*jari_jari*tinggi;
	luas = 2*PI*jari_jari*jari_jari*tinggi;
	cout<<"Volume Tabung: "<<volume<<endl; // volume di ambil dari rumus
	cout<<"Luas Tabung: "<<luas<<endl; // luas di ambil dari rumus
}
