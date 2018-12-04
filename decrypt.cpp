#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char text[100], decrypt[100];
    int key, lenght, code, row = 1;

    cout << "Enter encrypted text = ";
    gets(text);

    key = -1;
    while(key > -50){
    lenght = strlen(text);

    for (int i=0; i<lenght;i++){
        code = int (text[i])+key;
        if (code < 32)
            code = code + 95;
        if (code > 126)
            code = code - 95;
        decrypt [i] = char(code);
    }
    cout << "Decrypt with key " << row << " = " << decrypt << endl;
    key = key-1;
    row = row+1;
    }
}