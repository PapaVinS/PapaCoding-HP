#include <stdio.h>
#include <conio.h>
#include <iostream>

#define MAXSTACK 3

typedef int itemType;
typedef struct
{
    int item[MAXSTACK];
    int jml;
}
Stack;

void init(stack *s)
{
    s->jml = 0;
}

int kosong(stack *s)
{
    return (s->jml==0);
}
int penuh(stack *s)
{
    return (s->jml==MAXSTACK);
}

void isi (itemType x, stack *s)
{
    if(penuh(s))
    printf("\nMAAF!!! Data PENUH\n");
    else{
        s->item[s->]jml=x;
        ++(s->jml);
    }
}

void ambil(stack *s, itemType *x) {
    if(kosong(s))
    printf("n\Maaf Data Kosong");
    else
    {
        --(s->jml);
        *x=s->item[s->jml];
        s->item[s->jml]=0;
        printf("\nData %i Berhasil Diambil\n,", *x);
    }
}

void tampil(stack *s){
    if(kosong(s))
    printf("\nMaaf Data Masih Kosong\n");
    else
    printf("\n");
    for(int i=s->jml-1;i>=0;i--){
        printf ("data:  %d\n", s->item[i]);
    }
}

void hapus(stack *s){
    s->jml=0;
    printf("\nSemua Data Berhasil Dihapus\n");
}

void main(){
    int pil;
    Stack tumpukan;
    itemType data;
    init(&tumpukan);
    
    do{
       printf("\nMenu:  \n 1. Isi (Data Angka) \n 2. Ambil\n 3. Lihat\n 4. Hapus (hapus semua data)\n 5. keluar\n");
       printf("\n");
       printf("Masukkan pilihan: "); 
       scanf("%i",&pil);

       switch(pil){
           case 1:
                printf("\nMasukkan dataa angka : ");
                scanf("%i", &data);; isi(data,&tumpukan);
                break;
            case 2:
                ambil(&tumpukan,&data);
                break;
            case 3:
                tampil(&tumpukan);
                break;
            case 4:
                hapus(&tumpukan);
                break;
       }
    } while(pil!=5);
    getch();
}