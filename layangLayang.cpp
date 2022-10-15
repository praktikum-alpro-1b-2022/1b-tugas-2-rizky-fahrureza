#include <iostream>
using namespace std;


int layangLayang(){
    int d1, d2, luas;
    cout << "Masukkan ukuran diagonal 1 layang-layang: ";
    cin >> d1;
    cout << "Masukkan ukuran diagonal 2 layang-layang: ";
    cin >> d2;
    luas = 0.5 * d1 * d2;
    cout << "Luas layang-layang dengan diagonal 1: " << d1 << " dan diagonal 2: " << d2 << " adalah "<< luas <<endl;

    return 0;
}
