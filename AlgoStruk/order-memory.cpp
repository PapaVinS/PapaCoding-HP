#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <conio.h>

using namespace std;

void p(void);
int *a,*b;

void main()
{
    p();
}
void p(void)
{
    a = (int *)malloc(sizeof(int));
    b = (int *)malloc(sizeof(int));
    *a = 19;
    *b = 5;
    a = b;
    *b = 8;
    printf ("Alamat  a =     %x\t    isi a   =   %d\n", a, *a);
    printf ("Alamat  b =     %x\t    isi b   =   %d\n",b , *b);

_getch();
}