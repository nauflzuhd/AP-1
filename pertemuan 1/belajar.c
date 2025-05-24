#include <stdio.h> // header untuk C
#include <conio.h> // header untuk getch() dan getche()

int main() { // untuk memulai program
    char nama[50]; // line 5 sampai 8 adalah variabel yang digunakan
    int nim;
    char kom[2];
    float ip;

    printf("Hello World\n"); // fungsi keluaran pada C

    printf("Masukkan nama : ");
    gets(nama); // get string, karakter spasi bisa dibaca

    printf("Masukkan nim : ");
    scanf("%d", &nim); // fungsi masukan pada C, %d untuk tipe data integer

    getchar(); // input satu karakter

    printf("Masukkan kom : ");
    gets(kom); 

    printf("Masukkan ip : ");
    scanf("%f", &ip); // %f untuk tipe data float

    /* Untuk Output */
    printf("Nama : ");
    puts(nama); // put string, digunakan untuk string dalam bentuk array char

    printf("NIM : %d\n", nim); // output pada c, %d untuk output tipe data integer, \n untuk pindah baris

    printf("KOM : ");
    puts(kom); 
    printf("IP : %f\n", ip); // output pada c, %f untuk output tipe data float, \n untuk pindah baris

    printf("press any button to continue...");
    getch(); // input satu karakter tanpa dimunculkan ke layar
} // akhir program
