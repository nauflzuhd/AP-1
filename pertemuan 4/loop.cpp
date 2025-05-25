#include <iostream> // Header untuk C++
using namespace std; // agar tidak menulis std diprogram 

int main() { // memulai main program
    // goto label, loncat ke label yang sudah ditentukan
    // Hello World, Fasilkom-TI, Ilmu Komputer, IKLC
    // -> Hello World, IKLC, Ilmu Komputer, Fasilkom-TI

    a: // label a (1)
        cout << "Hello World" << endl; // output
        goto d; // pergi ke d
    b: // label b (4)
        cout << "Fasilkom-TI" << endl; // output
        return 0; // menghentikan program
    c: // label c (3)
        cout << "Ilmu Komputer" << endl; // output
        goto b;
    d: // label d (2)
        cout << "IKLC" << endl; // output
        goto c; // pergi ke c

    // menampilkan bilangan genap 10 -> 2 dengan goto ( perulangan dengan goto )
    int i = 10; // variabel yang digunakan
    genap: // label genap
    if (i % 2 == 0)  // jika i bilangan genap maka
        cout << i << endl; // output i
        i--; // i di post decrement
    if (i >= 2)  // jika i lebih besar atau sama dengan 2 maka pergi ke label genap
        goto genap;

    // statement while, perulangan selama kondisi terpenuhi
    int i = 1; // variabel yang digunakan
    while(i <= 10) { // ketika i kurang dari atau sama dengan 10 maka
        if (i % 2 == 0) { // jika bilangan genap maka
            cout << i << " "; // output i
        } i++; // i di post increment
    } // akhir while looping

    // statement do-while, perulangan dieksekusi terlebih dahulu kemudian baru dicek apakah kondisi terpenuhi ( perulangan minimal 1 kali )
    int i = 1; // variabel yang digunakan
    do { // awal do while looping
        cout << i << endl; // output 1
    } while (i <= 0); // mengecek apakah i kurang dari atau sama dengan 0, jika iya program akan diulang 

    // statement for, mirip seperti while tetapi lebih simpel karena inisialisasi, kondisi, dan increase sudah ditulis di awal statement
    // for (inisialisasi, kondisi, increase)
    for (int i = 1; i <= 10; i += 2) { // variabel i = 1, selama i <= 10, increase i = i + 2
        cout << "Hello World" << endl; // output
    } // akhir for looping

    // statement nested for, for di dalam for
    // ***** 5 x 5
    for (int i = 1; i <= 5; i++) { // variabel i = 1, selama i <= 5, i increment
        for (int j = 1; j <= 5; j++) { // variabel j = 1, selama j <= 5, j increment
            cout << " * "; // output *
        } // akhir for looping j
        cout << endl; // pindah baris
    } // akhir for looping i
    
    // Hasilnya
    // *****
    // *****
    // *****
    // *****
    // *****

    // segitiga siku siku
    for (int i = 1; i <= 5; i++) { // variabel i = 1, selama i <= 5, i increment
        for (int j = 1; j <= i; j++) { // variabel j = 1, selama j <= i, j increment
            cout << " * "; // output *
        } // akhir for looping j
        cout << endl; // pindah baris
    } // akhir for looping i

    // Hasilnya
    // *
    // **
    // ***
    // ****
    // *****
    
} // akhir program
