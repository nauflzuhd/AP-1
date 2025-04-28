#include <iostream>
using namespace std;

// Fungsi tanpa nilai balikan
void TampilkanPesan() {
    cout << "==== SELAMAT DATANG DI AP-1 ====" << endl;
}

// Fungsi dengan nilai balikan
int tambah(int a, int b) {
    return a + b;
} 

// Fungsi overload
int kali(int a, int b) {
    return a*b;
}

double kali(double a, double b) {
    return a*b;
}

// Fungsi rekursif : menghitung nilai faktorial
int faktorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * faktorial (n - 1);
    }
}

int main() {
    system("CLS");
    int x = 5, y = 3;

    //menggunakan fungsi tanpa nilai balikan
    TampilkanPesan();

    //menggunakan fungsi dengan nilai balikan
    int HasilTambah = tambah(x, y);
    cout << "Hasil penjumlahan : " << HasilTambah << endl;

    //menggunakan fungsi overload
    int hasilkali = kali(x, y);
    double hasilkalidouble = kali(5.5, 2.0);
    cout << "hasil perkalian (int) : " << hasilkali << endl;
    cout << "hasil perkalian (double) : " << hasilkalidouble << endl; 

    //menggunakan fungsi rekursif
    int angka = 5;
    cout << "Faktorial dari " << angka << " adalah " << faktorial(angka) << endl;
}
