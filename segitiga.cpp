#include <iostream>
using namespace std;


int segitiga(){
    int t, a, luas;
    cout << "Masukkan ukuran alas segitiga: ";
    cin >> a;
    cout << "Masukkan ukuran tinggi segitiga: ";
    cin >> t;
    luas = 0.5 * a * t;
    cout << "Luas segitiga dengan alas: " << a << " dan tinggi: " << t << " adalah "<< luas <<endl;

    return 0;
}
