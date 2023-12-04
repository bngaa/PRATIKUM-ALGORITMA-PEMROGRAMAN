#include <stdio.h>

// Struktur untuk menyimpan data mahasiswa
struct Mahasiswa {
    int npm;
    char nama[50];
    char tanggal_lahir[10];
    char alamat[50];
    long long hp;
};

int main() {
    char lagi;

    // Membuat array untuk menyimpan data mahasiswa
    struct Mahasiswa mahasiswa[50];
    int jumlahMahasiswa = 0;

    do {
        // Mengambil input data mahasiswa
        printf("NPM : ");
        scanf("%d", &mahasiswa[jumlahMahasiswa].npm);

        printf("NAMA : ");
        scanf(" %[^\n]s", mahasiswa[jumlahMahasiswa].nama);

        printf("TGL LAHIR : ");
        scanf("%s", mahasiswa[jumlahMahasiswa].tanggal_lahir);

        printf("ALAMAT : ");
        scanf(" %[^\n]s", mahasiswa[jumlahMahasiswa].alamat);

        printf("HP : ");
        scanf("%lld", &mahasiswa[jumlahMahasiswa].hp);

        // Menambah jumlah mahasiswa
        jumlahMahasiswa++;

        // Menanyakan apakah ingin memasukkan data lagi
        printf("Mau memasukkan data lagi [y/t]? ");
        scanf(" %c", &lagi);

    } while (lagi == 'y' || lagi == 'Y');

    // Menampilkan data mahasiswa
    printf("\nBentuk tampilan output:\n");
    for (int i = 0; i < jumlahMahasiswa; i++) {
        printf("%-15d%-20s%-20s%-20s%-10d\n", mahasiswa[i].npm, mahasiswa[i].nama, mahasiswa[i].tanggal_lahir, mahasiswa[i].alamat, mahasiswa[i].hp);
    }

    return 0;
}
