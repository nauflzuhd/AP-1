#include <iostream> // header pada C++
using namespace std; // agar tidak memakai std diprogram

int main() { // untuk memulai program
    float luas, p, l; // variabel yang digunakan
    cout << "Masukkan panjang : "; // output
    cin >> p; // input p

    cout << "Masukkan lebar : "; // output
    cin >> l; // input l

    luas = p * l; // menghitung luas
    cout << "Luas = "<< luas << endl; // output luas dan pindah baris
    return 0; // menghentikan program ( mengembalikan nilai 0 pada program utama )
} // akhir program
