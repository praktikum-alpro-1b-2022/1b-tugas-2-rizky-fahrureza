#include <iostream>
using namespace std;


int lingkaran(){
    int r;
    float luas;
    const float phi = 3.14;
    cout << "Masukkan ukuran jari-jari lingkaran: ";
    cin >> r;
    luas = phi * r * r;
    cout << "Luas lingkaran dengan jari-jari: " << r << " adalah "<< luas <<endl;

    return 0;
}
