#include <iostream>
#include <math.h>

int N;
float jumlah, rerata, peny, stdrdev, data[100];
void Masukkan_Data()

{
    std::cout<< "Banyaknya nilai = ";
    std::cin >> N;
    for (int i=0; i<N; i++)
{
    std::cout << "Nilai ke-" << (i+1) << " = ";
    std::cin  >> data[i];
}
}
void Hitung_Rerata() {
    jumlah = 0;
    for (int i=0; i<N; i++) {
    jumlah = jumlah+data[i];
    }
    rerata = jumlah/N;
}
void Hitung_Standar_Deviasi() {
peny = 0;
for (int i=0; i<N; i++) {

        peny += (data[i] - rerata)*(data[i] - rerata);
}

stdrdev = sqrt(peny/(N-1));

}
void Tampilkan_Hasil() {
std::cout << "Jumlah = " << jumlah << std::endl;
std::cout << "Rerata = " << rerata << std::endl;
std::cout << "Standar Deviasi = " << stdrdev << std::endl;

}
    main()
{
    Masukkan_Data();
    Hitung_Rerata ();
    Tampilkan_Hasil();
}
