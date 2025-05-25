#include <iostream> // header untuk C++
using namespace std; // agar tidak menulis std di program

main () { // memulai progarm
    int nilai; // variabel yang digunakan
    cout << "Masukkan Nilai : "; // output
    cin >> nilai; // input nilai

    // statement if untuk mengecek apakah nilai merupakan bilangan kelipatan 10 atau 5
    if (nilai % 10 == 0) { // jika nilai mod 10 = 0 maka
        cout << "Nilai adalah kelipatan 5 dan 10 "; // output akan dieksekusi
    } else if (nilai % 5 == 0) { // jika nilai mod 5 = 0 maka
        cout << "Nilai adalah kelipatan 5 "; // output akan dieksekusi
    } else { // jika nilai mod 10 dan mod 5 tidak sama dengan 0 maka
        cout << "Nilai bukan kelipatan keduanya"; // output akan dieksekusi
    } // akhir if else if statement
} // akhir program
