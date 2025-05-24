#include <iostream> // header untuk C++
using namespace std; // agar tidak menulis std diprogram

int main() { // memulai program
    string password, sandi, expected = ""; // variabel yang digunakan, untuk expected diisi " "

    cout << "Masukkan kata sandi : "; // output
    cin >> password; // input password

    cout << "Masukkan kata : "; // output
    cin >> sandi; // input sandi

    // Membuat string "expected" berdasarkan pola tertentu
    for (int i = 0; i < password.length(); i++) { // for looping untuk i = 0, jika i kurang dari panjang karakter password, i di increment
        expected += password.substr(0, i + 1); // expected dtambah dengan string password indeks ke 0 sampai ke i
        // contoh password = ayam
        // maka expected = a
        //               = aay
        //               = aayaya
        //               = aayayaayam  
    } // akhir for looping

    // Mengecek apakah input kedua sesuai dengan pola yang diharapkan
    if (expected == sandi) { // jika expected sama dengan sandi yang di input maka
        cout << "Tulisan agen benar" << endl; // output akan dieksekusi
    } else { // jika expected != sandi maka
        cout << "Tulisan agen salah" << endl; // output akan dieksekusi
    } // akhir if statement

    return 0; // program berhenti
} // akhir dari program
