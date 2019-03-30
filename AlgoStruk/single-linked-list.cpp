#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
#include <conio.h>

using namespace std;

struct dtnilai *tampung;
struct dtnilai *ujung;
struct dtnilai *awal;
int j;
char strnilai[5], jawab[6];

struct dtnilai
{
    char nim[10];
    char nama[20];
    double nilai;
    struct dtnilai *next;
};

void main()
{
    printf("DATA MAHASISWA   :   \n");
    printf("=================== \n");
    printf("\n");
    while(1)
    {
        if(j==0)
        {
            awal=(struct dtnilai*) malloc(sizeof(struct dtnilai));
            printf("NIM :   ");
            gets(awal->nim);
            printf("\n");
            printf("Nama    :   ");
            gets(awal->nama);
            printf("\n");
            printf("Nilai Test  :   ");
            gets(strnilai);
            printf("\n");
            awal->nilai = atof(strnilai);
            tampung = awal;
            tampung -> next = NULL;
        }
        else
        {
            ujung = (struct dtnilai*) malloc(sizeof(struct dtnilai));
            tampung -> next = ujung;
            printf("NIM :   ");
            gets(ujung->nim);
            printf("\n");
            printf("Nama    :   ");
            gets(ujung->nama);
            printf("\n");
            printf("Nilai Test  :   ");
            gets(strnilai);
            printf("\n");
            ujung->nilai = atof(strnilai);
            ujung->next = NULL;
            tampung = ujung;
        }
        printf("Masukkan Data lagi? (y/t)   :   ");
        gets(jawab);
        printf("\n");
        if((strcmp)jawab, "Y")==0 | | strcmp(jawab, "y")==0))
        {
            j++;
            continue;
        }
        else if ((strcmp)jawab, "Y")==0 || strcmp(jawab, "t")==0))
            break;
    }
    printf("Data mahasiswa yang telah diinputkan    :   \n");
    printf("======================================\n");
    printf("NIM\tNama\tNilai\n");
    printf("\n");
    ujung = awal;
    while(ujung!=NULL)
    {
        printf("%s\t%s|t%6.2lf\n", ujung->nim,ujung->nama,ujung->nilai);
        ujung=ujung->next;
    }
    _getch();
}