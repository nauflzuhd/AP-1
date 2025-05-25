#include <iostream> // Header untuk C++
using namespace std; // agar tidak menulis std di program

void penjumlahan(int a, int b) { // fungsi penjumlahan dengan parameter formal a dan b
    cout << a + b << endl; // output a + b
} // akhir fungsi

void penjumlahanPointer(int *a, int *b) { // fungsi penjumlahanPointer dengan parameter formal *a dan *b
    *a += *b; // *a = *a + *b
    cout << *a << endl; // output *a, dengan pointer kita bisa mengubah langsung nilai dari a
} // akhir fungsi

void doubleValue(int *a) { // fungsi doubleValue dengan parameter formal *a
    *a *= 2; // *a = *a * 2
    cout << *a << endl; // output *a, dengan pointer kita bisa mengubah langsung nilai dari a
} // akhir fungsi

int main() { // memulai main program

    system("CLS"); // membersihkan layar

    // Deklarasi Pointer
    // tanda * berfungsi sebagai pointer dan tanda & berfungsi sebagai alamat
    int number = 35; // variabel yang digunakan
    int *pointer_number = &number; // pointer_number diisi alamat number dan menunjuk yang bertipe data integer

    cout << "Isi Variabel Number = " << number << endl; // output number
    cout << "Alamat memori variabel number = " << &number << endl; // output alamat number
    cout << "Isi variabel pointer_number = " << pointer_number << endl; // output pointer_number
    cout << "Isi variabel yang ditunjuk oleh pointer_number = " << *pointer_number << endl; // output isi variabel yang ditunjuk pointer_number
    cout << "Alamat memori variabel pointer_number = " << &pointer_number << endl; // output alamat dari pointer_number

    // Pointer Operation
    *pointer_number = 25; // *pointer_number diinisialisasi dengan 25 yang dimana hal ini memengaruhi number, yang awalnya 35 berubah menjadi 25
    cout << "Isi Variabel Number = " << number << endl; // output number
    cout << "Alamat memori variabel number = " << &number << endl; // output alamat number
    cout << "Isi variabel pointer_number = " << pointer_number << endl; // output pointer_number
    cout << "Isi variabel yang ditunjuk oleh pointer_number = " << *pointer_number << endl; // output isi variabel yang ditunjuk pointer_number
    cout << "Alamat memori variabel pointer_number = " << &pointer_number << endl; // output alamat dari pointer number

    // Pointer in Array, otomatis menunjuk ke indeks 0
    int num[] = {1, 2, 3, 4, 5}; // array diisi
    int *pointer_num = num; // pointer_num diisi alamat num indeks ke-0 dan menunjuk yang bertipe data integer
    cout << "Isi Variabel Num = " << num[0] << endl; // output num[0]
    cout << "Alamat memori variabel num = " << &num[3] << endl; // output alamat dari array num[3]
    cout << "Isi variabel pointer_num = " << pointer_num << endl; // output pointer_num
    cout << "Isi variabel yang ditunjuk oleh pointer_num = " << *pointer_num << endl; // output isi variabel yang ditunjuk pointer_num
    cout << "Alamat memori variabel pointer_num = " << &pointer_num << endl; // output alamat dari pointer_num
    
    *pointer_num += 5; // 6, karena isi num[0] adalah 1 ( mengubah isi indeks ke-0 menjadi 6 )
    cout << "Isi Variabel Num = " << num[0] << endl; // output num[0]
    cout << "Alamat memori variabel num = " << &num[0] << endl; // output alamat num[0]
    cout << "Isi variabel pointer_num = " << pointer_num << endl; // output pointer_num
    cout << "Isi variabel yang ditunjuk oleh pointer_num = " << *pointer_num << endl; // output isi variabel yang ditunjuk pointer_num
    cout << "Alamat memori variabel pointer_num = " << &pointer_num << endl; // output alamat pointer_num

    // Pointer in Parameter, bisa mengubah
    int num1 = 5; // variabel yang digunakan
    int num2 = 7; // variabel yang digunakan
    penjumlahan(num1, num2); // fungsi penjumlahan dengan parameter aktual num1 dan num2 ( hasilnya 12 )
    cout << num1 << endl; // output num1 5 
    cout << num2 << endl; // output num2 7
    penjumlahanPointer(&num1, &num2); // fungsi penjumlahanPointer dengan parameter aktual &num1 dan &num2 ( hasilnya 12 )
    cout << num1 << endl; // output num1 12, dengan pointer kita bisa mengubah langsung nilai dari num1
    cout << num2 << endl; // output num2 7

    // Pointer in pointer
    int score = 4; // variabel yang digunakan
    int *pointer_score = &score; // pointer_score diisi dengan alamat score dan menunjuk yang bertipe data integer dari score
    int **pointer_pscore = &pointer_score; // pointer_pscore diisi alamat pointer_score dan menunjuk yang bertipe data integer yang ditunjuk oleh pointer_score yang mana pointer_score menunjuk yang bertipe integer dari score

    cout << "Isi variabel score " << score << " dan alamat memorinya " << &score << endl; // output dari score dan alamat dari score
    cout << "Isi dari variabel pointer_score " << pointer_score << " dan isi dari variabel yang ditunjuk pointer_score " << *pointer_score << " alamat memori pointer_score " << &pointer_score << endl; // output pointer_score, isi data yang ditunjuk pointer_score, dan alamat pointer_score lalu pindah baris
    cout << "Isi dari variabel pointer_pscore " << pointer_score << " dan isi dari variabel yang ditunjuk pointer_pscore " << **pointer_pscore << " alamat memori pointer_pscore " << &pointer_pscore << endl; // output pointer_score, isi data yang ditunjuk pointer_pscore, dan alamat pointer_pscore lalu pindah baris

    // Dynamic Pointer, pointer yang alamatnya dapat berubah selama program berjalan
    int *ptr = new int; // ptr diisi alamat baru new integer dan menunjuk yang bertipe data integer
    *ptr = 30; // *ptr diinisialisasi dengan 30
    cout << "Isi variabel ptr = " << *ptr << " alamat variabel ptr = " << &ptr << endl; // output isi data yang ditunjuk ptr dan alamat dari ptr lalu pindah baris

    delete ptr; // deallocation, menghapus ptr
    cout << "Isi variabel ptr = " << *ptr << " alamat variabel ptr = " << &ptr; // outputnya menjadi acak karena dealokasi

    // Contoh
    int n; // variabel yang digunakan
    cout << "Masukkan sebuah angka = "; // output
    cin >> n; // input n

    doubleValue(&n); // memanggil fungsi doubleValue dengan parameter aktual &n, bisa mengubah langsung nilai dari n
    cout << "Nilai angka setelah dikali 2 = " << n << endl; // output n 
} // akhir program
