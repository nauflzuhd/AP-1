#include <iostream> // Header untuk C++
#include <string> // Header untuk library string
#include <array> // Header untuk library array
using namespace std; // agar tidak menulis std di program

int main() { // memulai main program
    //penjumlahan matriks 2x2
    int matriks1[2][2]; // baris 8 - 10 adalah variabel array yang digunakan
    int matriks2[2][2];
    int hasil[2][2];

    // For looping untuk input matriks pertama
    cout << "Matriks 1 : " << endl; // output lalu pindah baris
    for (int i = 0; i < 2; i++) { // variabel i = 0, selama i < 2, i increment
        for (int j = 0; j < 2; j++) { // variabel j = 0, selama j < 2, j increment
            cout << "Masukkan elemen baris " << i + 1 << " kolom " << j + 1 << " : "; // output baris ke berapa dan kolom ke berapa
            cin >> matriks1[i][j]; // input matriks1 baris ke-i kolom ke-j
        } // akhir for looping j
    } cout << endl; // akhir for looping i dan pindah baris

    // For looping untuk input matriks kedua
    cout << "Matriks 2 : " << endl; // output lalu pindah baris
    for (int i = 0; i < 2; i++) { // variabel i = 0, selama i < 2, i increment
        for (int j = 0; j < 2; j++) { // variabel j = 0, selama j < 2, j increment
            cout << "Masukkan elemen baris " << i + 1 << " kolom " << j + 1 << " : "; // output baris ke berapa dan kolom ke berapa
            cin >> matriks2[i][j]; // input matriks2 baris ke-i kolom ke-j
        } // akhir for looping j
    } cout << endl; // akhir for looping i dan pindah baris

    // Output hasil penjumlahan matriks1 dan matriks2
    cout << "Hasil : " << endl; // output
    for (int i = 0; i < 2; i++) { // variabel i = 0, selama i < 2, i increment
        for (int j = 0; j < 2; j++) { // variabel j = 0, selama j < 2, j increment
            hasil[i][j] = matriks1[i][j] + matriks2[i][j]; // pada baris ke-i kolom ke-j hasil diinisialisasi matriks1 + matriks2
            cout << hasil[i][j] << " "; // output hasil pada baris ke-i kolom ke-j
        } cout << endl; // pindah baris dan akhir for looping j
    } // akhir for looping i
} // akhir main program
