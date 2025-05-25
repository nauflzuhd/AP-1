#include<iostream> // Header C++
#include<string> // Header fungsi string
#include<array> // Header fungsi array
using namespace std; // agar tidak menulis std diprogram

int main() { // memulai main program
    //Array Declaration & Initialitzation (deklarasi dan inisialisasi)
    /* 2 Cara membuat Array */

    //Cara 1 : array kosong, tidak langsung diinisialisasi saat array dideklarasikan
    string nama[5]; // array yang digunakan 
    nama[0] = "Alya"; // array nama indeks ke-0 = Alya
    nama[1] = "Parul"; // array nama indeks ke-0 = Parul
    nama[2] = "Syukron"; // array nama indeks ke-0 = Syukron
    nama[3] = "Aurick"; // array nama indeks ke-0 = Aurick
    nama[4] = "Dzackwan"; // array nama indeks ke-0 = Dzackwan

    //Cara 2 : array yang langsung diisi, diinisialisasi saat array dideklarasikan
    string nama[5] = {"Alya", "Parul", "Syukron", "Aurick", "Dzackwan"}; // array nama langsung diisi
    string nama[] = {"Alya", "Parul", "Syukron", "Aurick", "Dzackwan"}; // array nama tidak dibatasi isinya

    //Ascending element in array, indeks array naik
    cout << nama[0] << endl; // output nama indeks ke-0
    cout << nama[1] << endl; // output nama indeks ke-1
    cout << nama[2] << endl; // output nama indeks ke-2
    cout << nama[3] << endl; // output nama indeks ke-3
    cout << nama[4] << endl; // output nama indeks ke-4

    //Menggunakan Looping, untuk output array sesuai indeks
    for (int i = 0; i < 5; i++) { // variabel i = 0, selama i < 5, i increment
        cout << nama[i] << endl; // output nama ke-i
    } // akhir for looping

    //Descending  Element in Array Looping, untuk output array menurun
    for (int i = 4; i >= 0; i--) { // variabel i = 4, selama i >= 0, i decrement
        cout << nama[i] << endl; // output  nama ke-i
    } // akhir for looping

    //Multidimensional Array, untuk array multidimensi
    // Contoh array 2 dimensi
    // 1 3 5
    // 2 4 6       

    // For looping output array matriks
    int matriks[2][3] = {{1,3,5}, {2,4,6}}; // variabel array matriks 2x3
    for (int i = 0; i < 2; i++) { // variabel i = 0, selama i < 2, i increment
        for (int j = 0; j < 3; j++) { // variabel j = 0, selama j < 3, j increment
            cout << matriks[i][j] << " "; // output matriks baris ke-i dan kolom ke-j
        } cout << endl; // pindah baris, akhir looping  j
    } // akhir looping i

    // For looping output array matriks
    int matriks[4][6] = {{1,2,3,4,5,6}, {7,8,9,10,11,12}, {13,14,15,16,17,18}, {19,20,21,22,23,24}}; // variabel array matriks 4x6 
    for (int i = 0; i < 4; i++) { // variabel i = 0, selama i < 4, i increment
        for (int j = 0; j < 6; j++) { // variabel j = 0, selama j < 6, j increment
            cout << matriks[i][j] << "\t"; // output matriks baris ke-i kolom ke-j, \t agar barisnya rata
        } cout << endl; // pindah baris, akhir looping j
    } // akhir for looping i

    //Array of Characters (String), array karakter ( karakter pertama = 0 )
    string nama = "Naufal"; // variabel array nama 
    cout << nama[0] << endl; // output nama indeks ke-0 (N)
    cout << nama[2] << endl; // output nama indeks ke-2 (u)

    // For looping output array nama
    for (int i = 0; i < nama.length(); i++) { // variabel i = 0, selama i < panjang karakter nama, i increment
        cout << nama[i] << endl; // output nama indeks ke-i
    } // akhir for looping 

    string s1= "Hello"; // variabel yang digunakan
    string s2= "World"; // variabel yang digunakan

    // 1. S1 = S2;
    s1 = s2 << endl; // s1 diinisialisasi s2 lalu pindah baris
    cout << s1; // output s1

    // 2. S1 = S1 + S2
    s1 = s1 + s2;  // s1 diinisialisasi s1 yang ditambah s2
    cout << s1 << endl; // output s1 lalu pindah baris

    //3. S1.length()
    cout << (s1 + s2).length() << endl; // output panjang karakter s1 ditambah s2 lalu pindah baris

    //4. S1.substr(n,m) n = indeks ke berapa, m = panjang banyak karakternya
    cout << s1.substr(0,2); // output 

    //Operator sizeof() dalam byte, untuk menunjukkan besar data
    int angka = 10; // variabel yang digunakan
    cout << sizeof(angka); // output besar data dari angka
    
    int nilai[]={10,20,30,40,50}; // variabel array nilai
    cout << sizeof(nilai); // besar data array nilai

    string s = "Donisdlifslkdfjslkd"; //  variabel yang digunakan
    cout << sizeof(s) << endl; // output besar data dari s
    cout << s.length(); // output panjang karakter dari s

    string nama_karyawan[] = {"Alya", "Parul", "Syukron", "Aurick", "Dzackwan"}; // variabel array yang digunakan
    int n = sizeof(nama_karyawan) / sizeof(string); // n diinisialisasi besar data nama_karyawan dibagi besar data string
    cout << n << endl; // hasil output menunjukkan banyak isi array nama_karyawan

    //array library, fungsi dari library header library
    array<float, 5> nilai = {52.1, 90, 81.2, 0, 100}; // array bertipe data float berisi 5 banyak daya 
    cout << "Nilai : "; // output
    for (int i = 0; i < nilai.size(); i++) { // variabel i = 0, selama i < banyak data array nilai, i increment
        cout << nilai[i] << " "; // output nilai indeks ke-i 
    } // akhir for looping 

    // output array nilai
    for (float n : nilai) { // variabel n diinisialisasi array nilai
        cout << n << " "; // output n
    } // akhir for looping
} // akhir main program
