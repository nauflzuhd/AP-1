#include <iostream> //header untuk cpp /* komentar beberapa baris */
#include <conio.h> //header untuk getche,getch
using namespace std; //agar tidak menggunakan std di dalam main program
main ()
{
    string nama;
    char kom,kelamin;
    int nim;
    float ip;

    cout<<"Hello world!"<<endl;
    cout<<"Masukkan Nama : ";  //cin>>nama;
    getline(cin,nama); //agar karakter spasi bisa terbaca
    cout<<"Masukkan Kom            : ";cin>>kom;
    cout<<"Masukkan NIM            : ";cin>>nim;
    cout<<"Masukkan IP             : ";cin>>ip;
    cout<<"Masukkan jenis kelamain : ";
    kelamin = getche(); //agar karakter langsung tampil jadi ga perlu tekan enter
    cout<<endl;

    cout<<"\nHalo "<<nama<<endl;
    cout<<"KOM Kamu adalah           : "<<kom<<endl;
    cout<<"NIM Kamu adalah           : "<<nim<<endl;
    cout<<"IP Kamu adalah            : "<<ip<<endl;
    cout<<"Jenis kelamin kamu adalah : ";
    putchar(kelamin); //untuk menampilkan karakter jenis kelamin

    getch(); //karakter yang diinput tidak muncul dilayar, tetapi disimpan dalam memori
}
