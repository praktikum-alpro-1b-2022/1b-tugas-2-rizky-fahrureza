#include <iostream>
using namespace std;


int belahKetupat(){
    int d1, d2, luas;
    cout << "Masukkan ukuran diagonal 1 belah ketupat: ";
    cin >> d1;
    cout << "Masukkan ukuran diagonal 2 belah ketupat: ";
    cin >> d2;
    luas = 0.5 * d1 * d2;
    cout << "Luas belah ketupat dengan diagonal 1: " << d1 << " dan diagonal 2: " << d2 << " adalah "<< luas <<endl;

    return 0;
}
