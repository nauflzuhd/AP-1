#include <iostream> // Header untuk C++
#include <string> // Header library string
#include <vector> // Header library vector
using namespace std; // agar tidak menulis std di program

/* Struct mirip seperti record pada pascal, struct bisa menyimpan banyak variabel yang berbeda tipe data menjadi tipe data yang baru */
struct Alamat { // struct Alamat
    string jalan; // isinya variabel jalan kota yang bertipe data string, dan kodepos yang bertipe data integer
    string kota;
    int kodepos;
}; // akhir struct Alamat

// Struct di dalam struct ( Nested Struct )
struct Mahasiswa { // struct Mahasiswa
    string nama; // isinya nama tipe data string, umur tipe data integer, ipk tipe data float, dan alamat yang bertipe data Alamat(struct)
    int umur;
    float ipk;
    Alamat alamat; // nested struct
}; // akhir dari struct Mahasiswa

int main() { // memulai main program
    system("CLS"); // agar layar bersih
    Mahasiswa mhs1; // mhs1 bertipe data struct Mahasiswa

    mhs1.alamat.jalan = "Jalan Jamin Ginting"; // mhs1 => alamat => jalan = Jalan Jamin Ginting
    mhs1.alamat.kota = "Medan"; // mhs1 => alamat => Kota = Medan
    mhs1.alamat.kodepos = 20228; // mhs1 => alamat => kodepos = 20228

    cout << "Alamat : " << mhs1.alamat.jalan << " " << mhs1.alamat.kota << " " << mhs1.alamat.kodepos << endl; // output jalan, kota, dan kodepos pada struct Alamat dalam struct Mahasiswa
    
    vector<Mahasiswa> mahasiswa; // vector mahasiswa yang bertipe data struct Mahasiswa
    int n; // variabel yang digunakan
    cout << "Masukkan banyak mahasiswa : "; // output
    cin >> n; // input n

    // For looping untuk input nama, umur, ipk ke dalam vector
    for(int i = 0; i < n; i++) { // variabel i = 0, selama i < n, i increment
        cout << "Mahasiswa ke-" << i + 1 << endl; // output Mahasiswa ke-i + 1
        
        cin.get(); // input
        cout << "Masukkan nama : "; // output
        getline(cin, mhs1.nama); // input nama pada mhs1

        cout << "Masukkan umur : "; // output
        cin >> mhs1.umur; // input umur pada mhs1

        cout << "Masukkan IPK : "; // output
        cin >> mhs1.ipk; // input ipk pada mhs1

        mahasiswa.push_back(mhs1); // mhs1 yang sudah diisi dimasukkan ke vector mahasiswa
    } // akhir for looping 

    // For looping untuk output vector mahasiswa
    for (int i = 0; i < n; i++) { // variabel i = 0, selama i < n, i increment
        cout << "Mahasiswa ke-" << i + 1 << endl; // output Mahasiswa ke- i + 1
        cout << "Nama : " << mahasiswa[i].nama << endl; // output nama mahasiswa ke-i
        cout << "Umur : " << mahasiswa[i].umur << endl; // output umur mahasiswa ke-i
        cout << "IPK : " << mahasiswa[i].ipk << endl; // output ipk mahasiswa ke-i
    } // akhir for looping
} // akhir program
