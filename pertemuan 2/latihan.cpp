#include <iostream>
using namespace std;
main() {
    float jari, volume, luas;
    system("cls");
    cout << "Masukkan jari jari bola : ";
    cin >> jari;
    volume = float(4)/float(3) *3.14 * jari * jari * jari;
    luas = 4 * 3.14 * jari * jari;
    cout << "Volume bola adalah : " << volume <<endl;
    cout << "Luas permukaan bola adalah : " << luas <<endl;
}