#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char tulisan[100], decrypt[100];
    int kunci, panjang, kode, urutan = 1;


    cout << "Masukkan enkripsi = ";
    gets(tulisan);

    kunci = -1;
    while(kunci > -50){
    panjang = strlen(tulisan);

    for (int i=0; i<panjang;i++) {
        kode = int (tulisan[i])+kunci;
        if (kode < 32)
            kode = kode + 95;
        if (kode > 126)
            kode = kode - 95;
        decrypt [i] = char(kode);
    }
    cout << "decrypt "<< urutan << " = " << decrypt << endl;
    kunci = kunci-1;
    urutan = urutan+1;
    }
}