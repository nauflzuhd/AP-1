#include <iostream>
using namespace std;

string namaGlobal = "Ilmu";

string namaVariabel() {
    string namaLokal = "Komputer";

    //coba akses
    cout << namaLokal << endl;

    //coba akses
    cout << namaGlobal << endl;
}

int main() {
    namaVariabel();
    
    //coba akses
    cout << namaGlobal << endl;
    
    //coba akses
    // gak bisa //cout << namaLokal << endl;
}     