#include<iostream>
#include<string>
#include<array>
using namespace std;

int main() {
    //Array Declaration & Initialitzation
    /* 2 Cara membuat Array */

    //Cara 1 : array kosong
    // string nama[5];
    // nama[0] = "Alya";
    // nama[1] = "Parul";
    // nama[2] = "Syukron";
    // nama[3] = "Aurick";
    // nama[4] = "Dzackwan";

    //Cara 2 : array yang langsung diisi
    // string nama[5] = {"Alya", "Parul", "Syukron", "Aurick", "Dzackwan"};
    // string nama[] = {"Alya", "Parul", "Syukron", "Aurick", "Dzackwan"};

    //Ascending element in array
    // cout << nama[0] << endl;
    // cout << nama[1] << endl;
    // cout << nama[2] << endl;
    // cout << nama[3] << endl;
    // cout << nama[4] << endl;
    // cout << nama[5] << endl;

    //Menggunakan Looping
    // for (int i = 0; i < 5; i++) {
    //     cout << nama[i] << endl;
    // }

    //Descending  Element in Array Looping
    // for (int i = 4; i >= 0; i--) {
    //     cout << nama[i] << endl;
    // }

    //Multidimensional Array
    // 1 3 5
    // 2 4 6
    
    // int matriks[2][3] = {{1,3,5},{2,4,6}};
    // for (int i = 0; i < 2; i++) {
    //     for (int j = 0; j < 3; j++) {
    //         cout << matriks[i][j] << " ";
    //     } cout << endl;
    // } 

    // int matriks[4][6] = {{1,2,3,4,5,6},{7,8,9,10,11,12},{13,14,15,16,17,18},{19,20,21,22,23,24}};
    // for (int i = 0; i < 4; i++) {
    //     for (int j = 0; j < 6; j++) {
    //         cout << matriks[i][j] << "\t";
    //     } cout << endl;
    // }

    //Array of Characters (String)
    // string nama = "Naufal";
    // cout << nama[0] << endl;
    // cout << nama[2] << endl;

    // for (int i = 0; i < nama.length(); i++) {
    //     cout << nama[i] << endl;
    // }

    // string s1= "Hello";
    // string s2= "World";

    //1. S1 = S2;
    // s1 = s2 << endl;
    // cout << s1;

    //2. S1 = S1 + S2
    // s1 = s1 + s2;
    // cout << s1 << endl;

    //3. S1.length()
    // cout << (s1 + s2).length() << endl;

    //4. S1.substr(n,m) n = indeks ke berapa, m = panjangnya
    // cout << s1.substr(0,2);

    //Operator sizeof() dalam byte
    // int angka = 10;
    // cout << sizeof(angka);
    
    // int nilai[]={10,20,30,40,50};
    // cout << sizeof(nilai);

    // string s = "Donisdlifslkdfjslkd";
    // cout << sizeof(s) << endl;
    // cout << s.length();

    // string nama_karyawan[] = {"Alya", "Parul", "Syukron", "Aurick", "Dzackwan"};
    // int n = sizeof(nama_karyawan) / sizeof(string);
    // cout << n << endl;

    //array library
    // array<float, 5> nilai = {52.1, 90, 81.2, 0, 100};
    // cout << "Nilai : ";
    // for (int i = 0; i < nilai.size(); i++) {
    //     cout << nilai[i] << " ";
    // }

    // for (float n : nilai) {
    //     cout << n << " ";
    // }
}