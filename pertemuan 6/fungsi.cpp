#include <iostream> // Header untuk C++
using namespace std; // agar tidak menulis std di program

// Fungsi tanpa nilai balikan, tanpa return ( tipe data void )
void TampilkanPesan() { // fungsi TampilkanPesan
    cout << "==== SELAMAT DATANG DI AP-1 ====" << endl; // output
} // akhir fungsi

// Fungsi dengan nilai balikan, dengan return
int tambah(int a, int b) { // fungsi tambah dengan parameter formal a dan b
    return a + b; // mengembalikan nilai a + b
} // akhir fungsi 

// Fungsi overload, dua fungsi yang sama namun memiliki tipe data yang berbeda
int kali(int a, int b) { // fungsi kali bertipe data integer dengan parameter formal a dan b
    return a * b; // mengembalikan nilai a * b bertipe data integer
} // akhir fungsi

double kali(double a, double b) { // fungsi kali bertipe data double dengan parameter formal a dan b
    return a * b; // mengembalikan nilai a * b bertipe data double 
} // akhir fungsi
 
// Fungsi rekursif : menghitung nilai faktorial, yaitu fungsi yang memanggil dirinya sendiri
int faktorial(int n) { // fungsi faktorial dengan parameter formal n
    if (n == 0 || n == 1) { // jika n sama dengan 0 atau sama dengan 1 maka
        return 1; // mengembalikan nilai 1
    } else { // jika n tidak sama dengan 0 atau 1 maka
        return n * faktorial (n - 1); // mengembalikan nilai n * fungsi faktorial ( memanggil dirinya sendiri )
    } // akhir if else statement
} // akhir fungsi faktorial

int main() { // memulai main program
    system("CLS"); // membersihkan layar
    int x = 5, y = 3; // variabel yang digunakan

    //menggunakan fungsi tanpa nilai balikan
    TampilkanPesan(); // memanggil fungsi TampilkanPesan

    //menggunakan fungsi dengan nilai balikan
    int HasilTambah = tambah(x, y); // variabel HasilTambah diinisialisasi dengan fungsi tambah dengan parameter aktual x dan y
    cout << "Hasil penjumlahan : " << HasilTambah << endl; // output HasilTambah

    //menggunakan fungsi overload
    int hasilkali = kali(x, y); // variabel hasilkali diinisialisasi dengan fungsi kali dengan parameter aktual x dan y
    double hasilkalidouble = kali(5.5, 2.0); // variabel hasilkalidouble diinisialisasi dengan fungsi kali dengan parameter aktual 5,5 dan 2,0
    cout << "hasil perkalian (int) : " << hasilkali << endl; // output hasil kali tipe data integer
    cout << "hasil perkalian (double) : " << hasilkalidouble << endl;  // output hasil kali tipe data double

    //menggunakan fungsi rekursif
    int angka = 5; // variabel yang digunakan
    cout << "Faktorial dari " << angka << " adalah " << faktorial(angka) << endl; // output dan memanggil fungsi faktorial dengan parameter aktual angka
} // akhir main program
