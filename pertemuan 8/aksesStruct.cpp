#include<iostream> // Header untuk C++
#include <string> // Header library string
using namespace std; // agar tidak menulis std di program

struct Mahasiswa{ // struct Mahasiswa
    string nama; // isi struct Mahasiswa adalah nama bertipe data string, umur bertipe data integer, dan ipk bertipe data float
    int umur;
    float ipk;
}; // akhir struct Mahasiswa

int main() { // memulai main program
    Mahasiswa mhs1; // mhs1 bertipe data Mahasiswa(struct)

    mhs1.nama = "Naufal"; // nama diisi Naufal
    mhs1.umur = 18; // umur diisi 18
    mhs1.ipk = 4.00; // ipk diisi 4,00

    // akses struct dengan .
    cout << "Akses dengan . : " << endl; // output lalu pindah baris
    cout << "Nama : " << mhs1.nama << endl; // output nama lalu pindah baris
    cout << "Umur : " << mhs1.umur << endl; // output umur lalu pindah baris
    cout << "IPK : " << mhs1.ipk << endl; // output ipk lalu pindah baris
    
    // akses struct dengan pointer
    Mahasiswa *ptrMhs = &mhs1; // ptrMhs diinisialisasi dengan alamat mhs1 dan menunjuk yang bertipe Mahasiswa(struct)
    cout << "Akses dengan -> : " << endl; // output lalu pindah baris
    cout << "Nama : " << ptrMhs->nama  << endl; // output nama
    cout << "Umur : " << ptrMhs->umur << endl; // output umur
    cout << "IPK : " << ptrMhs->ipk << endl; // output ipk
} // akhir program 
