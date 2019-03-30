#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <conio.h>

using namespace std;
#define MAX 10

struct dtnilai
{
    char nim[12];
    char nama[20];
    double nilai[MAX];
};

int main()
{
    struct dtnilai data;
    int i, jml;
    char strnilai[5], strjum[5];
    printf("NIM     : ");
    gets(data.nim);
    cout << endl;
    printf("Nama : ");
    gets(data.nama);
    cout << endl;
    printf("Jumlah Test : ");
    gets(strjum);
    jml = atoi(strjum);
    cout << endl;
    for(i = 0; i<jml; i++)
    {
        printf("Nilai test %d : ", i+1);
        gets(strnilai);
        data.nilai[i]=atof(strnilai);
    }
    
        cout << endl;
        printf ("==============================\n");
        cout << endl;
        printf ("DATA MAHASISWA YANG TELAH DIINPUTKAN : \n");
        cout << endl;
        printf ("NIM    :       %s\n", data.nim);
        cout << endl;
        printf ("Nama   :       %s\n",data.nama);
        cout << endl;
    
    for(i = 0; i<jml; i++)
    {
        printf("Nilai test %d : %1f\n", i+1, data.nilai[i]);
    }
    _getch();
}