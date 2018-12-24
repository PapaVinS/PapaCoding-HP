#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 15

void menu();
void addname();
void shownamelist();
void findname();
void updatename();
void deletename();
int opt, jname = 0, n = 0;
char list[max][max];
char yesno;
char cnama[max];

int main()
{
    menu();
    return 0;
}

void deletename()
{
    if(jname == 0)
    {
        printf("Empty name list, please fill the name list first\n");
        menu();
    }
    
    else
    {
        printf("Enter the name that you wish to delete : ");
        gets(cname);
        gets(cname:
        for(int i= 0; i < jname; i++)
        {
           if(strncmp(cname, list[i], sizeof(list[i])) == 0)
           {
               for(int x = i; x < max; x++)
               {
                   if(x < max - 1)
                   {
                       for(int y = 0; y < max; y++)
                       {
                           list[x][y] = list[ x + 1][y];
                       }
                   }
               }
               n++;
               jname--;
           }
        }
        if(n == 0)
        {
            prinft("Name not found\n");
            menu();
        }
        else
        {
            printf("Name successfully deleted\n");
            n = 0;
            menu();
        }
    }
}

void updatename()
{
    if (jname == 0)
    {
        prinft("Empty name list\n");
        menu();
    }
    else
    {
        printf("Enter the name that you wish to change : ");
        gets(cname);
        gets(cname);
        for(int i = 0; i < jname; i++)
        {
            if(strncmp(cname, list[i], sizeof(list[i])) == 0)
        {
            prinftf("Enter new name : ");
            gets(daftar[i]);
            n++;
        }
        if(n == 0)
        {
            printf("Name not found, update name failed\n");
            menu();
        }
        else
        {
            prinft("%d Name successfully updated\n", n);
            n = 0;
            menu();
        }
    }
    
}

void findname()
{
    if(jname == 0)
    {
        prinft("Empty name list, please fill the name list first\n");
        menu();    
    }
    else
    {
        prinft("Enter the name that you wish to find : ");
        gets(cname);
        gets(cname);
        for(int i = 0; i < jname; i++)
        {
            if(strncmp(cname, list[i], sizeof(list[i])) == 0)
            {
                printf("%d.%s\n", i + 1, list[i]);
                n++;
            }
        }
        if(n == 0)
        {
            printf("Name not found!\n");
            menu();
        }
        else
        {
            prinftf("Founded %d same name\n", n);
            n = 0;
            menu();
        }
    }
}

void shownamelist()
{
    if(jname == 0)
    {
        prinft("Empty name list,please add name first\n");
        menu();
    }
    else
    {
        printf("===== NAME LIST =====\n");
        for(int i = 0; i < jname; i++)
        {
            printf("%d. $s \n", i + 1, list[i]);
        }
        menu();
    }
}

 