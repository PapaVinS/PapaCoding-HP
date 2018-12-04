#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char tulisan[100], terenkripsi[100];
	int kunci, panjang, kode;

	cout << "Masukkan tulisan = ";
	gets(tulisan);
	cout << "Masukkan nilai kunci = ";
	cin >> kunci;
	panjang = strlen(tulisan);

	for (int i=0; i<panjang;i++) {
		kode = int (tulisan[i])+kunci;
		if (kode < 32)
			kode = kode + 95;
		if (kode > 126)
			kode = kode - 95;
		terenkripsi [i] = char(kode);
	}
	cout << "Terenkripsi = " << terenkripsi << endl;
}
