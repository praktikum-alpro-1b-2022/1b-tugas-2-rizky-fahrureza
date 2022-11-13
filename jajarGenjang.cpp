#include <iostream>
using namespace std;


int jajarGenjang(){
    int a, t, luas;
    cout << "Masukkan ukuran alas jajar genjang: ";
    cin >> a;
    cout << "Masukkan ukuran tinggi jajar genjang: ";
    cin >> t;
    luas = a*t;
    cout << "Luas jajar genjang dengan alas: " << a << " dan tinggi: " << t << " adalah "<< luas <<endl;

    return 0;
}
