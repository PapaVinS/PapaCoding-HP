#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    string a, b, c; // deklarasi string
    float nilai_tugas, nilai_uts, nilai_uas, nilai_kehadiran, na; // deklarasi float nilai
    cout << "   ==========NILAI AKHIR SEMESTER==========    " << endl << endl; // Judul Program
    cout << " Nama = "; getline(cin,a); // Nama Mahasiswa
    cout << " \n NIM = "; getline(cin,b); // Nim Mahasiswa
    cout << " \n Mata kuliah = "; getline(cin,c); // Nama kata kuliah
    cout << " \n Nilai Tugas = "; cin >> nilai_tugas; // Input nilai tugas
    cout << " \n Nilai UTS = "; cin >> nilai_uts; // Input nilai UTS
    cout << " \n Nilai UAS = "; cin >> nilai_uas; // Input nilai UAS
    cout << " \n Nilai Kehadiran = "; cin >> nilai_kehadiran; // Input nilai Kehadiran
    nilai_kehadiran = nilai_kehadiran*0.1;
    nilai_tugas = nilai_tugas*0.2;
    nilai_uts = nilai_uts*0.3;
    nilai_uas = nilai_uas*0.4;
    na = nilai_kehadiran * nilai_tugas * nilai_uts * nilai_uas;

    cout << endl;
    cout <<" Siswa yang bernama " <<a<< endl; // Output nama mahasiswa
    cout <<" \n NIM = "<<b<<endl; // Output NIM
    cout <<" \n Mata Kuliah = "<<c<<endl; // Output Mata Kuliah
    cout <<" \n Memperoleh Nilai Akhir = "<<na<<endl; // Output Nilai Akhir

}
