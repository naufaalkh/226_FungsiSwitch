#include <iostream>
using namespace std;

int bilangan1, bilangan2; // input variabel global

void inputData()
{
    cout << "Masukkan bilangan pertama :";
    cin >> bilangan1;
    cout << "Masukkan bilangan kedua :";
    cin >> bilangan2;
}

int penjumlahan(int a, int b)
{
    return a + b;
}