#include <iostream>
using namespace std;

int main() {
    // goto label
    // Hello World, Fasilkom-TI, Ilmu Komputer, IKLC
    // -> Hello World, IKLC, Ilmu Komputer, Fasilkom-TI

    // a:
    //     cout << "Hello World" << endl;
    //     goto d;
    // b:
    //     cout << "Fasilkom-TI" << endl;
    //     return 0;
    // c:
    //     cout << "Ilmu Komputer" << endl;
    //     goto b;
    // d:
    //     cout << "IKLC" << endl;
    //     goto c;

    // menampilkan bilangan genap 10 -> 2 dengan goto
    // int i = 10;
    // genap:
    // if (i % 2 == 0) 
    //     cout << i << endl;
    //     i--;
    // if (i >= 2)
    //     goto genap;

    // statement while
    // int i = 1;
    // while(i <= 10) {
    //     if (i % 2 == 0) {
    //         cout << i << " ";
    //     } i++;
    // }

    // statement do-while
    // int i = 1;
    // do {
    //     cout << i << endl;
    // } while (i <= 0);

    // statement for
    // for (inisialisasi, kondisi, increase)
    // for (int i = 1; i <= 10; i += 2) { // i = i + 2
    //     cout << "Hello World" << endl;
    // }

    // statement nested for
    // ***** 5 x 5
    // for (int i = 1; i <= 5; i++) {
    //     for (int j = 1; j <= 5; j++) {
    //         cout << " * ";
    //     }
    //     cout << endl;
    // }

    // segitiga siku siku
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout << " * ";
        }
        cout << endl;
    }
} 