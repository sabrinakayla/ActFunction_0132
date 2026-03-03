#include <iostream>
using namespace std;

int p, l;

void input() {
    cout << "Masukkan panjang = ";
    cin >> p;
    cout << "Masukkan lebar = ";
    cin >> l;
}

float jumlah(float a, float b, float c) {
    return a + b + c;
}

int luaspersegi(int a, int b) {
    return a * b;
}

void output() {
    cout << "Hasilnya = " << luaspersegi (p, l) << endl;
    cout << "Terimakasih" << endl;
}

int main() {
    input();
    output();
    cout << "Hasil penjumlahan " << jumlah(15.1, 24.9, 67);
}