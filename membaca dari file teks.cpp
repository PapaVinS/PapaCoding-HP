#include <stdio.h>
#include<string.h>
#include <iostream>

using namespace std

;main()
{

char namafileoutput[] = "filesaya.txt";
char teks[80];
FILE *fout;

fout = fopen(namafileoutput, "W");
cout << "Ketikkan teks yang akan ditulis"
     << "ke file, akhiri dengan END\n";
while (1) {
    gets(teks);
    if (strcmp(teks,"END") == 0)
        break;
    strcat(teks,"\n");
    fputs(teks, fout);
}
fclose(fout);
cout << "Selesai" << endl;
}
