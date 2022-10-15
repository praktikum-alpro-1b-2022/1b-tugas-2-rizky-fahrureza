#include <iostream>
using namespace std;


int persegiPanjang(){
    int p, l, luas;
    cout << "Masukkan ukuran panjang persegi panjang: ";
    cin >> p;
    cout << "Masukkan ukuran lebar persegi panjang: ";
    cin >> l;
    luas = p*l;
    cout << "Luas persegi panjang dengan panjang: " << p << " dan lebar: " << l << " adalah "<< luas <<endl;

    return 0;
}
