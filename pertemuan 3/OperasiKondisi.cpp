#include <iostream> // header untuk C++
using namespace std; // agar tidak menulis std diprogram
main() { // memulai program
    
    int nilai; // variabel yang digunakan
    
    system("CLS"); // agar tampilan layar bersih

    cout << "Masukkan Nilai : "; // output
    cin >> nilai; // input

    // if statement, dieksekusi jika nilai if benar
    if (nilai <= 65) { // jika nilai lebih kecil atau sama dengan 65 maka
        cout << "Anda tidak lulus" << endl; // output akan dieksekusi
    } // akhir if statement ( jika nilai lebih dari 65 maka perintah tidak dieksekusi )

    // if else statement, bedanya dengan if adalah jika nilai if tidak terpenuhi maka else yang akan dieksekusi
    if (nilai <= 65){ // jika nilai lebih kecil dari 65 atau sama dengan 65 maka
        cout << "Anda tidak lulus" << endl; // output akan deksekusi
    } else { // jikai nilai lebih dari 65 maka
        cout << "Anda lulus!" << endl; // output akan dieksekusi
    } // akhir if else statement

    // if else if statement, bedanya dengan if else dan if adalah jika nilai tidak benar maka akan dioper ke if selanjutnya sampai nilai terpenuhi
    if (nilai == 100) { // jika nilai sama dengan 100 maka
        cout << "Anda KECE!" << endl; // output akan dieksekusi
    } else if (nilai <= 65) { // jika nilai kurang dari atau sama dengan 65 maka
        cout << "Anda tidak lulus" << endl; // output akan dieksekusi
    } else { // jika nilai tidak sama dengan 100 atau tidak kurang dari atau sama dengan 65 maka
        cout << "Anda Lulus" << endl; // output akan dieksekusi
    } // akhir if else if statement

    //Nested if, yaitu if di dalam if
    if (nilai <= 65) { // jika nilai kurang dari atau sama dengan 65 maka
        cout << "Anda tidak lulus" << endl; // output dieksekusi
    } else { // jika nilai lebih dari 65 maka
        if (nilai == 100) { // nested if jika nilai sama dengan 100 maka
            cout << "Anda lulus dan anda kece" << endl; // output akan dieksekusi
        } else { // jika nilai tidak sama dengan 100 maka
            cout << "Anda lulus" << endl; // output dieksekusi
        } // akhir nested if
    } // akhir if statement
    
    //Switch case, bedanya dengan if statement switch case lebih simpel karena program akan langsung ke nilai yang diinput tanpa mengecek semua kemungkinan, tapi hanya untuk char ataupun integer
    switch (nilai) { // misal nilai = 4
        case 1: // tidak dieksekusi
            cout << "Senin" << endl;
            break; // break harus dipakai pada switch case sebagai pemisah antar case
        case 2: // tidak dieksekusi
            cout << "Selasa" << endl;
            break;
        case 3: // tidak dieksekusi
            cout << "Rabu" << endl;
            break;
        case 4: // dieksekusi
            cout << "Kamis" << endl;
            break;
        case 5: // tidak dieksekusi
            cout << "Jum'at" << endl;
            break;
        case 6: // tidak dieksekusi
            cout << "Sabtu" << endl;
            break;
        case 7: // tidak dieksekusi
            cout << "Minggu" << endl;
            break;
        default: // tidak dieksekusi  ( jika nilai tidak dalam range switch case maka default akan dieksekusi )
            cout << "Inputan tidak valid" << endl;
            break;
    } // akhir switch case

    //Switch range, bedanya dengan switch case hanya untuk satu nilai sedangkan switch range bisa pada suatu rentang
    switch(nilai) { // misal nilai 90
        case 85 ... 100 : cout << "A" << endl; break; // output akan dieksekusi
        case 80 ... 84 : cout << "B+" << endl; break; // tidak dieksekusi
        case 75 ... 79 : cout << "B" << endl; break; // tidak dieksekusi
        case 70 ... 74 : cout << "C+" << endl; break; // tidak dieksekusi
        case 65 ... 69 : cout << "C" << endl; break; // tidak dieksekusi
        case 60 ... 64 : cout << "D" << endl; break; // tidak diekesekusi
        default : cout << "E" << endl; break; // tidak dieksekusi ( jika nilai tidak dalam range switch range maka default akan dieksekusi )
    } // akhir switch range

    //Ternary Operator, yaitu operasi kondisi menggunakan question mark
    if (nilai % 2 == 0) { // jika nilai mod 2 = 0 maka
        cout << "Genap nih" << endl; // output akan dieksekusi
    } else { // jika nilai mod 2 != 0 maka
        cout << "Ganjil nih" << endl; //output akan dieksekusi
    } // akhir if statement sebagai perbandingan dengan ternary operator

    string checkNum = (nilai % 2 == 0) ? "Genap" : "Ganjil"; // jika nilai mod 2 = 0 maka genap akan diinisialisasi ke chechNum, jika nilai mod 2 != 0 maka ganjil akan diinisialisasi ke checkNum
    cout << nilai << " tuh bilangan " << checkNum << " sih" << endl; // output checkNum
} // akhir program
