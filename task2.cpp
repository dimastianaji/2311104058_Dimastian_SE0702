#include <iostream>
using namespace std;

string satuan[] = { "nol", "satu", "dua", "tiga", "empat", "lima", "enam", "tujuh", "delapan", "sembilan",
                    "sepuluh", "sebelas", "dua belas", "tiga belas", "empat belas", "lima belas", "enam belas",
                    "tujuh belas", "delapan belas", "sembilan belas" };

string puluhan[] = { "", "", "dua puluh", "tiga puluh", "empat puluh", "lima puluh", "enam puluh", "tujuh puluh",
                     "delapan puluh", "sembilan puluh" };


string angkaKeTulisan(int angka) {
    if (angka < 20) {
        return satuan[angka];
    } else if (angka < 100) {
        if (angka % 10 == 0) {
            return puluhan[angka / 10];
        } else {
            return puluhan[angka / 10] + " " + satuan[angka % 10];
        }
    } else if (angka == 100) {
        return "seratus";
    }
    return "Angka di luar jangkauan";
}

int main() {
    int angka;
    cout << "Masukkan angka (0-100): ";
    cin >> angka;
    if (angka < 0 || angka > 100) {
        cout << "Input tidak valid, masukkan angka antara 0 sampai 100." << endl;
    } else {
        cout << "Angka " << angka << " dalam tulisan: " << angkaKeTulisan(angka) << endl;
    }

    return 0;
}
