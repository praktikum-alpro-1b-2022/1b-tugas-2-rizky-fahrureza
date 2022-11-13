#include <iostream>
using namespace std;


int trapesium(){
    int t, a, luas, alas_a, alas_b;
    cout << "Masukkan ukuran alas a trapesium: ";
    cin >> alas_a;
    cout << "Masukkan ukuran alas b trapesium: ";
    cin >> alas_b;
    cout << "Masukkan ukuran tinggi trapesium: ";
    cin >> t;
    luas = 0.5 * (alas_a + alas_b) * t;
    cout << "Luas trapesium dengan alas a: " << alas_a << ", alas b: " << alas_b << " dan tinggi: "<< t << " adalah " << luas <<endl;

    return 0;
}
