#include <iostream> // header untuk C++
using namespace std; // agar tidak menulis std diprogram

int main() { // memulai main program
    string kalimat; // baris 5 dan 6 adalah variabel yang digunakan
    int i;

    cout << "Masukkan kalimat : "; // output
    getline(cin, kalimat); // input agar karakter spasi bisa dibaca

    // for looping untuk mengubah semua huruf kecil menjadi huruf kapital
    for (i = 0; i < kalimat.length(); i++) { // for looping untuk nilai i = 0, dieksekusi jika i kurang dari panjang karakter kalimat, nilai i di increment
        kalimat[i] = toupper(kalimat[i]); // jika i kurang dari panjang karakter kalimat maka kalimat indeks ke-i akan dikapitalkan
    } // akhir for looping

    cout << "Kalimat dalam huruf kapital : " << kalimat << endl; // output
    return 0; // menghentikan program
} // akhir program
