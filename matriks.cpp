#include <iostream>
using namespace std;
int N=2;
float A[5][5], B[5][5], C[5][5];
void MengisiMatriksA(float A[5][5])
{
for (int i=0; i<N; i++) {
for (int j=0; j<N; j++) {
cout << "elemen " << i << "," << j << " = ";
cin >> A[i][j];
}
}
}
void MengisiMatriksB(float B[5][5])
{
for (int i=0; i<N; i++) {
for (int j=0; j<N; j++) {
cout << "elemen " << i << "," << j << " = ";
cin >> B[i][j];
}
}
}
void MenjumlahMatriks(float C[5][5])
{
for (int i=0; i<N; i++) {
for (int j=0; j<N; j++) {
C[i][j] = A[i][j] + B[i][j];
}
}
}
void MenampilkanMatriksA (float A[5][5])
{
for (int i=0; i<N; i++) {
for (int j=0; j<N; j++) {
cout << "\t" << A[i][j];
}
cout << endl;
}
}
void MenampilkanMatriksB (float B[5][5])
{
for (int i=0; i<N; i++) {
for (int j=0; j<N; j++) {
cout << "\t" << B[i][j];
}
cout << endl;
}
}
void MenampilkanMatriksC (float C[5][5])
{
for (int i=0; i<N; i++) {
for (int j=0; j<N; j++) {
cout << "\t" << C[i][j];
}
cout << endl;
}
}
int main()
{
cout << "Masukkan elemen matriks A\n";
MengisiMatriksA(A);
cout << "Masukkan elemen matriks B\n";
MengisiMatriksB(B);
cout << "Matriks A = \n";
MenampilkanMatriksA(A);
cout << "Matriks B = \n";
MenampilkanMatriksB(B);
cout << "Jumlah kedua matriks adalah\n";
MenjumlahMatriks(C); //jk tdk ada hslnya 0 semua
MenampilkanMatriksC(C);
}
