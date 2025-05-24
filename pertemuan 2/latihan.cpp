#include <iostream> // header C++
using namespace std; // agar tidak memakai std diprogram

main() { // memulai program
    float jari, volume, luas; // variabel yang digunakan program
    system("cls"); // agar tampilan layar bersih
    cout << "Masukkan jari jari bola : "; // output
    cin >> jari; // input jari
    volume = float(4)/float(3) *3.14 * jari * jari * jari; // float digunakan agar hasilnya tidak dibulatin ke bawah ( bisa muncul dalam bentuk koma ) 
    luas = 4 * 3.14 * jari * jari; // menghitung nilai luas
    cout << "Volume bola adalah : " << volume <<endl; // output variabel volume dan pindah baris
    cout << "Luas permukaan bola adalah : " << luas <<endl; // output variabel luas dan pindah baris
} // akhir program
