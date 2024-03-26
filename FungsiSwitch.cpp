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

float pembagian(float a, float b)
{
    return a / b;
}

int main()
{
    int pilihan;
    do
    {
        cout << "Kalkulator Sederhana" << endl;
        cout << "====================" << endl;
        cout << "1. Penjumlahan" << endl;
        cout << "2. Pengurangan" << endl;
        cout << "3. Perkalian" << endl;
        cout << "4. Pembagian" << endl;
        cout << "5. Keluar" << endl;
        cout << "====================" << endl;
        cout << "Masukkan menu pilihan : " << endl;
        cin >> pilihan;

        switch (pilihan)
        {
            case 1:
            inputData();
            cout << "Hasil penjumlahan =" << penjumlahan(bilangan1, bilangan2) << endl;

            case 2:
            inputData();
            cout << "Hasil pengurangan =" << pengurangan(bilangan1, bilangan2) << endl;

            case 3:
            inputData();
            cout << "Hasil perkalian =" << perkalian(bilangan1, bilangan2) << endl;

            case 4:
            inputData();
            cout << "Hasil pembagian =" << pembagian(bilangan1, bilangan2) << endl;

            case 5:
                break;

            default:
                cout << "Pilihan tidak ada" << endl;
                break;
        }
    } while (pilihan !=5);
    
    system("pause");
    system("CLS");

}