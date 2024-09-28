#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    float bilangan1, bilangan2;
    cout << "Masukan bilangan pertama: " << endl;
    cin >> bilangan1;
    cout << "Masukan bilangan kedua: " << endl;
    cin >> bilangan2;

    float hasiltambah = bilangan1 + bilangan2;
    cout << "Hasil penjumlahan: " << hasiltambah << endl;

    float hasilkurang = bilangan1 - bilangan2;
    cout << "Hasil pengurangan: " << hasilkurang << endl;

    float hasilkali = bilangan1 * bilangan2;
    cout << "Hasil perkalian: " << hasilkali << endl;

    float hasilbagi = bilangan1 / bilangan2;
    cout << "Hasil pembagian: " << hasilbagi << endl;

}


