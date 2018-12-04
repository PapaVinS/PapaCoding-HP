#include <iostream>
#include <math.h>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main()

{
    char menu;
    
    cout << "-----------------------" << endl;
    cout << "Name : PapaVinS" << endl;
    cout << "NIM  : 228" << endl;
    cout << "Program Menu :" << endl;
    cout << "1. Count Factorial\n";
    cout << "2. Binary to Decimal\n";
    cout << "3. Check Prime Number\n";
    cout << "4. Series Prime Number\n";
    cout << "5. Close Program\n";
    cout << "-----------------------";
    cout << "\n\n";
    cout << "Choose your program (1,2,3,4,5) = ";
    cin >> menu;

switch(menu){
    case '1': 
    int b,c;
        cout<<"Enter the number that about to be factored: ";
        cin>>b;
        c=b;
        cout<<"number ="<<b<<endl;
        cout<<b<<"! = ";
        for(int i=1;i<=b;i++){
            cout<<i;
        if(i==b){
            cout<<" =";
        }else{
            cout<<"*";
        }
    }
    //count start
        for(int i=1;b>i;){
            b=b-1;
            c=c*b;
    }
    //count end
        cout<<c;
            return 0;
    break;

    case '2':{
        long bin, dec = 0, rem, num, base = 1;
        cout << "Enter the binary number : ";
        cin >> num;
        bin = num;
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
        int num, res, i;
            cout << "Enter the positive integer : ";
            cin >> num;
            res = 0;
    for (i=1; i<=num; i++)
        if (num%i==0)
            res++;
            if (res==2)
                cout << "This number is a prime number \n";
            else
                cout << "This is not a prime number \n";
            return 0;
    break;

    case '4':

    int limit, x, check;

        cout<<"\n Enter the upper limit of prime numbers : ";
        cin>>limit;
        cout<<endl;
        cout<<" Series of prime numbers from 1 - "<<limit<<" Is: "<<endl<<endl;
    for (x = 2; x<=limit; x++)
    {
        check = 0;
    for (i = 2; i < x; i++)
        {
            if (x % i == 0)
        {
          check = 1;
        }
      }
        if (check == 0)
        {
            cout<<" "<<x<<",";
        }
   }
        cout<<endl<<endl;
    return 0;
    break;

    case '5':
        exit (EXIT_FAILURE);
    return 0;
    }    
}

