#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char text[100], encrypted[100];
    int key, lenght, code;

    cout << "Enter text = ";
    gets(text);
    cout << "Enter key value = ";
    cin >> key;
    lenght = strlen(text);

    for (int i=0; i<lenght;i++) {
        code = int (text[i])+key;
        if(code < 32)
            code = code - 95;
        if(code > 126)
            code = code - 95;
        encrypted [i] = char(code);
    }
    cout << "Encrypted = " << encrypted << endl;
}
