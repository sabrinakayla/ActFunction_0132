#include <iostream>
using namespace std;

int p, l, luas;
void input() {
    cout << "Masukkan panjang = ";
    cin >> p;
    cout << "Masukkan lebar = ";
    cin >> l;
}

int luaspersegi() {
return p * l;
}

void output() {
    cout << "Hasilnya = " << luaspersegi() << endl;
    cout << "Terimakasih";
}