#include <iostream> // header untuk C++
using namespace std; // agar tidak menulis std diprogram

int main() { // memulai main program
    system("cls"); // agar layar bersih
    
    string kalimat; // variabel yang digunakan
    cout << "Masukkan kalimat: "; // output
    getline(cin, kalimat); // input menggunakan getline agar bisa membaca karakter spasi

    for (int i = 0; i < kalimat.length(); i++) { // for looping untuk i = 0,dieksekusi jika i kurang dari panjang karakter kalimat, i di increment
        if (kalimat[i] == 'a' || kalimat[i] == 'e' || kalimat[i] == 'i' || kalimat[i] == 'o' || kalimat[i] == 'u') { // jika i kurang dari panjang karakter kalimat dan jika kalimat indeks ke-i merupakan huruf vokal kecil maka
            kalimat[i] = toupper(kalimat[i]); // kalimat indeks ke-i akan dieksekusi
        } // akhir if statement
    } // akhir for looping
    cout << "Kalimat hasil konversi: " << kalimat << endl; // output kalimat lalu pindah baris
} // akhir program
