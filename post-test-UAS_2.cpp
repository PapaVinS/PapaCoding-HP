#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    string a, b, c;
    char kriteria;
    float nilai_tugas, nilai_uts, nilai_uas, na;
    cout << "BIODATA NILAI " << endl << endl;
    cout << "Nama= "; getline(cin,a);
    cout << "\nNim= "; getline(cin,b);
    cout << "\nMata kuliah= "; getline(cin,c);
    cout << "\nNilai tugas= "; cin >> nilai_tugas;
    cout << "\nNilai Uts   = "; cin >> nilai_uts;
    cout << "\nNilai Uas   = "; cin >> nilai_uas;
    nilai_tugas = nilai_tugas * 0.2;
    nilai_uts = nilai_uts * 0.35;
    nilai_uas = nilai_uas * 0.45;
    na = nilai_tugas * nilai_uts * nilai_uas;
  
    cout << endl;
    cout << "Siswa yang bernama " << ">>" << a << " << " << endl;
    cout << "\nNIM        = " << b << endl;
    cout << "\nMatakuliah        = " << c << endl;
    cout << "\nNilai tugas x 20% = " << nilai_tugas << endl;
    cout << "\nNilai uts x 35%   = " << nilai_uts << endl;
    cout << "\nNilai uas x 45%   = " << nilai_uas << endl;
    cout << "\nmemperoleh nilai akhir  = " << na << endl;
    cout << "\nDengan kriteria   = " << kriteria;
    if(na >= 80){
        cout << "A";
    }else if(na >= 60){
        cout << "B";
    }else if(na >= 40){
        cout << "C";
    }else if(na >= 20){
        cout << "D";
    }else if(na >= 0){
        cout << "E";
    }

            
}