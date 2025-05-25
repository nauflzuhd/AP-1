#include <iostream> // Header untuk C++
using namespace std; // agar tidak menulis std di program

class ContohAkses { // class ContohAkses
    private: // private hanya bisa di dalam class ini sendiri, mirip seperti variabel lokal
        int privateVar; // variabel private

    protected: // protected bisa untuk inheritage ( pewarisan )
        int protectedVar; // variabel protected

    public: // public bisa untuk semua, mirip seperti variabel global
        int publicVar; // variabel public

    // Constructor
    ContohAkses() { // Constructor ContohAkses
        privateVar = 1; // privateVar diisi dengan 1
        protectedVar = 2; // protectedVar diisi dengan 2
        publicVar = 3; // publicVar diisi dengan 3
    } // akhir constructor

    void tampilkanSemua() { // Fungsi tampilkanSemua
        cout << "Akses dari dalam class : " << endl; // output lalu pindah baris
        cout << privateVar << endl; // output privateVar
        cout << protectedVar << endl; // output protectedVar
        cout << publicVar << endl; // output publicVar
    } // akhir fungsi tampilkanSemua
}; // akhir class ContohAkses

class Turunan : public ContohAkses { // class Turunan, turunan dari ContohAkses
    public: // bisa diakses semua
    void aksesProtected() { // fungsi aksesProtected
        cout << privateVar << endl; // tidak bisa karena privateVar adalah variabel private dari ContohAkses
        cout << protectedVar << endl; // output protectedVar
        cout << publicVar << endl; // output publicVar
    } // akhir fungsi
}; // akhir class Turunan

int main() { // memulai main program
    ContohAkses obj; // obj bertipe data ContohAkses(class)
    obj.tampilkanSemua(); // memanggil fungsi tampilkanSemua pada class obj
    cout << "\nAkses dari luar class : " << endl; // output lalu pindah baris
    cout << obj.privateVar << endl; // tidak bisa karena private milik ContohAkses
    cout << obj.protectedVar << endl; // tidak bisa karena protected milik ContohAkses
    cout << obj.publicVar << endl; // output publicVar lalu pindah baris

    cout << "\nAkses dari class Turunan : " << endl; // output lalu pindah baris
    Turunan tur; // tur bertipe data Turunan(turunan dari class)
    tur.aksesProtected(); // memanggil fungsi aksesProtected
} // akhir main program
