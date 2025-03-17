#include <iostream>
using namespace std;
main ()
{
    int nilai;
    cout << "Masukkan Nilai : ";
    cin >> nilai;
    if (nilai % 10 == 0) {
        cout << "Nilai adalah kelipatan 5 dan 10 ";
    }
    else if (nilai % 5 == 0) {
        cout << "Nilai adalah kelipatan 5 ";
    }
    else {
        cout << "Nilai bukan kelipatan keduanya";
    }
}