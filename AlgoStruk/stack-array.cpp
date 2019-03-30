#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <conio.h>

using namespace std;

#define MAX 10

strict ttumpukan
{
    int elm[MAX];
    int puncak;
};

struct ttumpukan t;
int top;

void inisialisasi()
{
    t.puncak=0;
    top=0;
}

void push(int x)
{
    if(t.puncak==MAX)
        printf("Stack Sudah Penuh\n");
        else
        {
            t.puncak=top+1;
            t.elm[t.puncak]=x;
            top=t.puncak;
            printf("PUSH %d :   %d\n", t.puncak. t.elm[t.puncak]);
        }
}
void pop()
{
    if(top==0)
    printf("stack kosong\n");
    else
    {
        printf("\nPOP %d = %d\n", top, t.elm[top]);
        t.puncak=top-1;
        top=t.puncak;
    }
}
void main()

{
    int i, jum;
    char strnilai[5], strjum[5];
    inisialisasi ();
    printf("Masukkan Jumlah Data    :   ");
    gets(strjum);
    printf("\n");
    jum=atoi(strjum);
    for(i=0;i<jum;i++)
    {
        printf("Nilai Integer %d    :   ", i+1);
        gets(strnilai);
        push(atoi(strnilai));
        printf("\n");
    }
    for(i=jum;i>0;i--)
        printf("Elemen Data :   %d\n", t.elm[i]);
        for(i=0;i<jum;i++)
        pop();
        _getch();
}