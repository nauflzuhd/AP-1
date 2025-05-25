#include <iostream> // Header untuk C++
using namespace std; // agar tidak menulis std di program

string namaGlobal = "Ilmu"; // variabel yang digunakan ( variabel global )

string namaVariabel() { // fungsi namaVariabel
    string namaLokal = "Komputer"; // variabel yang digunakan ( variabel lokal )

    //coba akses
    cout << namaLokal << endl; // output variabel lokal

    //coba akses
    cout << namaGlobal << endl; // output variabel global
} // akhir fungsi namaVariabel

int main() { // memulai main program
    namaVariabel(); // memanggil fungsi namaVariabel
    
    //coba akses
    cout << namaGlobal << endl; // output variabel global
    
    //coba akses
    cout << namaLokal << endl; // tidak bisa karena merupakan variabel lokal pada fungsi namaVariabel
} // akhir main program
