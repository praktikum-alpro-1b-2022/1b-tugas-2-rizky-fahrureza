/*
    Note: ini adalah main file.
    program harus dijalankan disini
    dan semua file header local harus dalam satu folder
*/

// Standart library/module
#include <iostream>
#include <string>

// Local File
#include "persegi.cpp"
#include "persegiPanjang.cpp"
#include "segitiga.cpp"
#include "trapesium.cpp"
#include "jajarGenjang.cpp"
#include "belahKetupat.cpp"
#include "layangLayang.cpp"
#include "lingkaran.cpp"


using namespace std;

int main(){
    int angka;
    char answer;
    do {
    string deskripsi = "Pilih rumus yang ingin digunakan: \n"
    "1. Persegi\n"
    "2. Persegi Panjang\n"
    "3. Segitiga\n"
    "4. Trapesium\n"
    "5. Jajar Genjang\n"
    "6. Belah Ketupat\n"
    "7. Layang-layang\n"
    "8. Lingkaran\n";
    cout << deskripsi;

    cout << "Masukkan pilihan rumus dalam angka: ";
    cin >> angka;

    switch(angka){
        case 1:
            persegi();
        break;
        case 2:
            persegiPanjang();
        break;
        case 3:
            segitiga();
        break;
        case 4:
            trapesium();
        break;
        case 5:
            jajarGenjang();
        break;
        case 6:
            belahKetupat();
        break;
        case 7:
            layangLayang();
        break;
        case 8:
            lingkaran();
        break;
        default:
            cout << "Harus memilih angka yang ada di list" << endl;
        break;
    }
    if(cin.fail()){
        cout << "Input harus berupa angka!!" << endl;
        break; // Untuk menghentikan looping
    }
    cout << endl;
    cout << "Apakah anda ingin menggunakan rumus lain? (y/t) ";
    cin >> answer;
    cout << endl;

    } while(answer != 't');

    cout << "Terima kasih telah menggunakan program ini :D";
    cout <<endl;
    return 0;
}
