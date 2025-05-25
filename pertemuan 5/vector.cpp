#include <iostream> // Header C++
#include <vector> // Header library Vector
using namespace std; // agar tidak menulis std di program

    // Vector Declaration & Initialization, deklarasi dan inisialisasi vektor
    /* bedanya vektor dan array */
    /* 1. vektor hanya bisa satu dimensi, sedangkan array bisa multidimensi */
    /* 2. vektor tidak dibatasi banyak datanya, sedangkan array perlu dibatasi */
    /* 3. vektor bisa diisi nilainya kapan saja, sedangkan array diisi harus berurut */
    /* 4. vektor bersifat dinamis, sedangkan array bersifat statis */

int main () { // memulai main program
    
    vector<string> nama_karyawan = {"Alya", "Parul", "Syukron", "Aurick", "Dzackwan"}; // vektor nama_karyawan diisi
    
    // for looping untuk output isi dari vektor nama_karyawan
    for (string karyawan : nama_karyawan) { // variabel karyawan diisi vektor nama_karyawan
        cout << karyawan << endl; // output karyawan lalu pindah baris
    } // akhir for looping

    // add data to vector push_back(), mengisi satu data di akhir
    nama_karyawan.push_back("Dhafa"); // Dhafa diisi pada akhir vektor nama_karyawan

    // for looping untuk output isi dari vektor nama_karyawan
    for (int i = 0; i < nama_karyawan.size(); i++) { // variabel i = 0, selama i < banyak data nama_karyawan, i increment
        cout << nama_karyawan[i] << endl; // output nama_karyawan pada indeks ke-i
    } // akhir for looping

    // Delete data from vector pop.back(), menghapus satu data di akhir
    nama_karyawan.pop_back(); // menghapus satu data di akhir ( Dhafa yang tadi diisi dihapus )

    nama_karyawan.erase(nama_karyawan.begin() + 3); // menghapus isi vektor nama_karyawan pada urutan pertama ditambah 3
    
    // for looping untuk output isi dari vektor nama_karyawan
     for (int i=0; i < nama_karyawan.size(); i++) { // variabel i = 0, selama i < banyak data dari nama_karyawan, i increment
        cout << nama_karyawan[i] << endl; // output nama_karyawan pada indeks ke-i lalu pindah baris
    } // akhir for looping
} // akhir main program
