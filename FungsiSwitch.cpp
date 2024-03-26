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

// input variabel lokal
int penjumlahan(int a, int b)
{
    return a + b;
}

int pengurangan(int a, int b)
{
    return a - b;
}

int perkalian(int a, int b)
{
    return a * b;
}

float pembagian(int a, int b)
{
    return a / b;
}