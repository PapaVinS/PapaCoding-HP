#include <queue>
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    queue <int> que;
    que.push(10);
    que.push(2);
    que.push(3);

    cout << "Paling depan    :   " << que.front() <<endl;
    cout << "Paling belakang :   " << que.back() <<endl;

    que.pop();
    cout << "10 sudah dikeluarkan" << endl;
    cout << "Paling depan       :   " << que.front() << endl;
    cout << "Paling belakang    :   " << que.back()  << endl;

    que.push(6);
    cout << "Angka 6 dimasukkan" << endl;
    cout << "Paling depan       : " << que.front() << endl;
    cout << "Paling belakang    : " << que.back() << endl;

    _getch();
}