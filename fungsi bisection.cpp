#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
double y(double x)
{
/* Untuk mencari solusi persamaan lain, kita */
/* hanya mengubah bagian dibawah ini */
return exp(x)-2*x-2;
}
main()
{ int iterasi = 0;
double xL, xC, xU, yL, yC, yU;
cout << "Mencari akar persamaan x*x-2*x-3=0"
<< " dengan metode bisection\n";
cout << "Masukkan tebakan awal bawah = ";
cin >> xL;
cout << "Masukkan tebakan awal atas = ";
cin >> xU;
cout << "iterasi      xL          xC"
<< "          xU          yL"
<< "	     yC          yU\n";
do {
xC = (xL+xU)/2;
yL = y(xL); // memakai fungsi pada return
yC = y(xC);
yU = y(xU);
cout << setw(5) << iterasi
<< setiosflags(ios::fixed)
<< setprecision(5)
<< setw(12) << xL
<< setw(12) << xC
<< setw(12) << xU
<< setw(12) << yL
<< setw(12) << yC
<< setw(12) << yU << endl;
if (yL*yC <= 0)
xU = xC;
else
xL = xC;
iterasi++;
} while((iterasi <= 50)&&(fabs(yC)>1e-5));
cout << "Jadi akarnya adalah " << xC;
}

