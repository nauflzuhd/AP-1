#include <iostream> //header untuk cpp /* komentar beberapa baris */
#include <conio.h> //header untuk getche,getch
using namespace std; //agar tidak menggunakan std di dalam main program

main () { // memulai program
    string nama; // baris 6 sampai 9 variabel yang digunakan
    char kom,kelamin;
    int nim;
    float ip;

    cout<<"Hello world!"<<endl; // fungsi keluaran pada c++, endl untuk pindah baris
    
    cout<<"Masukkan Nama : ";  //cin>>nama; juga bisa digunakan, tapi tidak bisa membaca karakter spasi
    getline(cin,nama); //fungsi masukan pada c++ agar karakter spasi bisa terbaca
    
    cout<<"Masukkan Kom            : "; // output
    cin >> kom; // fungsi masukan pada c++
    
    cout<<"Masukkan NIM            : "; // output
    cin >> nim; // input
    
    cout<<"Masukkan IP             : "; // output
    cin >> ip; // input
    
    cout<<"Masukkan jenis kelamain : "; // output
    kelamin = getche(); //agar karakter langsung tampil jadi ga perlu tekan enter
    cout << endl; // untuk pindah baris

    /* Output pada C++ */
    cout << "\nHalo "<< nama << endl; // output variabel yang telah diinisialisasi pada awal program ( output nama )
    cout << "KOM Kamu adalah           : " << kom << endl; // output kom
    cout << "NIM Kamu adalah           : " << nim << endl; // output nim
    cout << "IP Kamu adalah            : " << ip << endl; // output nim
    cout << "Jenis kelamin kamu adalah : "; // output
    putchar(kelamin); //untuk menampilkan karakter jenis kelamin berdasarkan input kelamin menggunakan getche()

    getch(); //karakter yang diinput tidak muncul dilayar, tetapi disimpan dalam memori
} //akhir program
