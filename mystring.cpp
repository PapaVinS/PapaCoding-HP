#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 15

void menu();
void tambahnama();
void tampilkandaftarnama();
void carinama();
void updatenama();
void hapusnama();
int pil, jnama = 0, n = 0;
char daftar[max][max];
char yesno;
char cnama[max];

int main()
{
	menu();
	return 0;
}

void hapusnama()
{
	if(jnama == 0)
	{
		printf("Daftar Nama Kosong,Silahkan Mengisi Daftar Nama Terlebih Dahulu\n");
		menu();
	}
	else
	{
		printf("Masukkan Nama Yang Ingin Anda Hapus : ");
		gets(cnama);
		gets(cnama);
		for(int i = 0; i < jnama; i++)
		{
			if(strncmp(cnama, daftar[i], sizeof(daftar[i])) == 0)
			{
				for(int x = i; x < max; x++)
				{
					if(x < max - 1)
					{
						for(int y = 0; y < max; y++)
						{
							daftar[x][y] = daftar[x + 1][y];
						}
					}
					else
					{
						for(int y = 0; y < max; y++)
						{
							daftar[x][y] = '\0';
						}
					}
				}
				n++;
				jnama--;
			}
		}
		if(n == 0)
		{
			printf("Nama Tidak Ditemukan\n");
			menu();
		}
		else
		{
			printf("Nama Berhasil Dihapus\n");
			n = 0;
			menu();
		}
	}
}

void updatenama()
{
	if(jnama == 0)
	{
		printf("Daftar Nama Kosong\n");
		menu();
	}
	else
	{
		printf("Masukkan Nama Yang Ingin Anda Ganti : ");
		gets(cnama);
		gets(cnama);
		for(int i = 0; i < jnama; i++)
		{
			if(strncmp(cnama, daftar[i], sizeof(daftar[i])) == 0)
			{
				printf("Masukkan Nama Baru : ");
				gets(daftar[i]);
				n++;
			}
		}
		if(n == 0)
		{
			printf("Nama Tidak Ditemukan,Update Nama Gagal\n");
			menu();
		}
		else
		{
			printf("%d Nama Berhasil Diupdate\n", n);
			n = 0;
			menu();
		}
	}
}

void carinama()
{
	if(jnama == 0)
	{
		printf("Daftar Nama Kosong,Silahkan Isi Daftar Nama Terlebih Dahulu\n");
		menu();
	}
	else
	{
		printf("Masukkan Nama Yang Inging Anda Cari : ");
		gets(cnama);
		gets(cnama);
		for(int i = 0; i < jnama; i++)
		{
			if(strncmp(cnama, daftar[i], sizeof(daftar[i])) == 0)
			{
				printf("%d.%s\n", i + 1, daftar[i]);
				n++;
			}
		}
		if(n == 0)
		{
			printf("Nama Tidak Ditemukan!\n");
			menu();
		}
		else
		{
			printf("Ditemukan %d Nama Yang Sama\n", n);
			n = 0;
			menu();
		}
	}
}

void tampilkandaftarnama()
{
	if(jnama == 0)
	{
		printf("Daftar Nama Kosong, Silahkan Menambahkan Nama Terlebih Dahulu\n");
		menu();
	}
	else
	{
		printf("===== DAFTAR NAMA =====\n");
		for(int i = 0; i < jnama; i++)
		{
			printf("%d. %s \n", i + 1, daftar[i]);
		}
		menu();
	}
}

void tambahnama()
{
	if(jnama == max)
	{
		printf("Daftar Nama Penuh \n");
		menu();
	}
	else
	{
		printf("Masukkan Nama : ");
		gets(daftar[jnama]);
		gets(daftar[jnama]);
		jnama++;
		printf("Ingin Menambahkan Nama Lagi atau Kembali Ke Menu Utama? y/n");
		scanf("%c", &yesno);
		if(yesno == 'y')
		{
			tambahnama();
		}
		else
		{
			menu();
		}

	}
}

void menu()
{
	printf("***** MENU *****\n");
	printf("1. Tambah Nama\n");
	printf("2. Update Nama\n");
	printf("3. Cari Nama\n");
	printf("4. Hapus Nama\n");
	printf("5. Tampilkan Daftar Nama\n");
	printf("6. Keluar\n");
	printf("Masukkan Nama Pilihan Anda : ");
	scanf("%d", &pil);
	switch(pil)
	{
	case 1:
		tambahnama();
	case 2:
		updatenama();
	case 3:
		carinama();
	case 4:
		hapusnama();
	case 5:
		tampilkandaftarnama();
	case 6:
		exit(0);
	default:
		printf("Pilihan Tidak Tersedia\n");
		printf("Silahkan Memilih Kembali\n");
		menu();

	}
}