#include <iostream>
using namespace std;

int main() {
    string kalimat;
    int i;

    cout << "Masukkan kalimat : ";
    getline(cin, kalimat);

    for (i = 0; i < kalimat.length(); i++) {
        kalimat[i] = toupper(kalimat[i]);
    }

    cout << "Kalimat dalam huruf kapital : " << kalimat << endl;
    return 0;
}