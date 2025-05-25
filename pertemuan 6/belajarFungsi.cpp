#include <iostream> // Header untuk C++
using namespace std; // agar tidak menulis std di program

// fungsi tanpa balikan sapa
void sapa(string nama) { // parameter formal nama
    cout << "Halo " << nama << "! Selamat belajar c++!" << endl; // output
} // akhir fungsi sapa

int main () { // memulai main program
    string namaPengguna = "Naufal"; // variabel namaPengguna diisi Naufal
    sapa(namaPengguna); // memanggil fungsi sapa dengan isi parameter aktual variabel namaPengguna
    return 0; // menghentikan program
} // akhir main program
