#include <stdio.h>

int main() {
    char nama[100];

    // Menampilkan pesan permintaan nama
    printf("Hello, nama : ");
    
    // Membaca input nama dari pengguna
    scanf("%99[^\n]", nama);

    // Menampilkan pesan selamat datang
    printf("Selamat Datang %s dalam Pemrograman C!\n", nama );

    return 0;
}
