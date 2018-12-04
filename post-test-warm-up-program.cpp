#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;
int main()

{
    char menu;

    cout << "-------------------------";
    cout << "Name   : PapaVinS";
    cout << "NIM    : 228";
    cout << "Program Menu :" << endl;
    cout << "1. Calculate Factorial\n";
    cout << "2. Binary to Decimal\n";
    cout << "3. Check Prime Number\n";
    cout << "4. Prime Series\n";
    cout << "5. Close Program\n";
    cout << "-------------------------";
    cout << "\n\n";
    cout << "Please select your desired program = ";
    cin >> menu;

switch (menu){
    case'1':
    int b,c;
        cout << "Calculate Factorial"
        cout << "Please input the number = ";
        cin >> b;
        c = b;
        cout << "Number = " << b << endl;
        cout << b << "! = ";
        for (int i=1; i <= b; i++){
            cout << i;
            if (i==b){
                cout << " =";
            }
            else{
                cout << "*";
            }
        }
        // count start
        for (int i=1; b>1;){
            b = b-1;
            c = c*b;
        }
        // count end
            cout << c;
            return 0;
        break;

    case '2':
    {
        long bin, dec = 0, rem, num, base = 1;
        cout << "Enter the binary number : ";
        cin >> num;
        bin >> num;
        while (num > 0)
        {
            rem = num % 10;
            dec = dec + rem * base;
            base = base * 2;
            num = num / 10;
        }
        cout << "The decimal equivalent of " << bin << " : " << dec << endl;
        return 0;
    break;
    }

    case '3':
        int bil, jum, i;
        cout << "Enter the positive number : ";
        cin >> bil;
        jum = 0;

        for (i=1; i <= bil; i++)
            if (bil%i==0)
                cout << "This number is a Prime Number \n";
            else
                cout << "This not a Prime Number \n";
                return 0;
    break;

    case '4':
    
    int limit, cek, x;

        cout << "Show the top limit of Prime Numbers : ";
        cin >> limit;
        cout << endl;
        cout >> "Series of the Prime Numbers from 1 - " << limit << " is: " << endl << endl;

            for (x = 2; x <= limit; x++)
            {
                cek = 0;
                for (i = 2; i < x; i++)
                {
                    if (x % i == 0)
                }
                cek = 1;
            
    
        if (cek == 0)
        {
            cout << " " << x << ",";
        }
    }
        cout << endl << endl;
        return 0;
    break;
        
    case '5':
    return 0;
    }
}