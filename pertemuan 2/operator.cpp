#include <iostream> // header C++
using namespace std; // agar tidak menulis std diprogram
main() { // memulai program
    int a,b; // variabel yang digunakan
    system("cls"); // agar tampilan layar bersih

    //Assingment Operator (=), untuk menginisialisasi nilai ke suatu variabel
    a = 3; // nilai a = 3
    b = 5; // nilai b = 5

    //Arithmatical Operation (+, -, /, *, %), yaitu operator untuk operasi aritmatika
    // int tambah = a + b; untuk penjumlahan
    // int kurang = a - b; untuk pengurangan
    // int kali = a * b, untuk perkalian
    // float bagi = float (a)/(b); untuk pembagian //type casting = mengubah tipe data dari sebuah variabel (integer ke float)
    // int modulo = a % b; , untuk mod
    // cout << "Hasil penjumlaah   : " << tambah << endl;
    // cout << "Hasil penngurangan : " << kurang << endl;
    // cout << "Hasil perkalian    : " << kali << endl;
    // cout << "Hasil pembagian    : " << bagi << endl;
    // cout << "Hasil sisa bagi    : " << modulo << endl;

    //Relational Operator, operator untuk operasi relasi
    // cout << (a==b) << endl; untuk sama dengan
    // cout << (a>b) << endl;  untuk lebih dari
    // cout << (a>=b) << endl; untuk lebih dari atau sama dengan
    // cout << (a<b) << endl; untuk kurang dari
    // cout << (a<=b) << endl; untuk kurang dari atau sama dengan
    // cout << (a!=b) << endl; untuk tidak sama dengan

    //Logical Operator (&&, ||, !), operator logika
    // cout << (true && true) << endl; 
    // cout << (true && false) << endl;       && untuk operasi AND
    // cout << (false && true) << endl;
    // cout << (false && false) << endl;

    // cout << (true || true) << endl;
    // cout << (true || false) << endl;        || untuk operasi OR
    // cout << (false || true) << endl;
    // cout << (false || false) << endl;

    // cout << !true <<endl;        ! untuk operasi NOT
    // cout << !false <<endl;

    //Bitwise Operator (~, >>, <<, &, ^, |), yaitu operator untuk bitwise
    // cout << (5 & 7) << endl; untuk AND
    // cout << (5 | 7) << endl; untuk OR
    // cout << (5 ^ 7) << endl; untuk XOR
    // cout << (~7) << endl; untuk NOT
    // cout << (7 << 2) << endl; untuk SHL
    // cout << (7 >> 2) << endl; untuk SHR

    //Shorthand, agar lebih simpel
    // a += 7; // a = a + 7
    // cout << a << endl;
    // a -= 7; // a = a - 7
    // cout << a << endl;
    // a *= 7; // a = a * 7
    // cout << a << endl;
    // a /= 7; // a = a / 7
    // cout << a << endl;

    //increment & decrement, untuk mengurangi 1 atau menambah 1
    //Pre Increment, langsung ditambah 1 saat itu juga
    // cout << a << endl; misal a = 1
    // cout << ++a << endl; maka a = 2

    // cout << b << endl; misal b = 2
    // cout <<++b << endl; maka b = 3

    //Post Increment, ditambah 1, satu baris setelah baris dieksekusi
    // cout << a << endl; misal 1 = 1
    // cout << a++ << endl; post increment a = 1
    // cout << a << endl; maka a = 2

    // cout << b << endl; misal b = 2
    // cout << b++ << endl; post increment b = 2
    // cout << b << endl; maka b = 3

    //Pre Decrement, langsung dikurang satu saat itu juga
    // cout << a << endl; misal a = 5
    // cout << --a << endl; maka a = 4

    // cout << b << endl; misal b = 4
    // cout <<--b << endl; maka b = 3

    //Post Decrement, dikurang 1, satu baris setelah baris dieksekusi
    // cout << a << endl; misal a = 5
    // cout << a-- << endl; post decrement a = 5
    // cout << a << endl; maka a = 4

    // cout << b << endl; misal b = 4
    // cout << b-- << endl; post decrement b = 4
    // cout << b << endl; maka b = 3
}
