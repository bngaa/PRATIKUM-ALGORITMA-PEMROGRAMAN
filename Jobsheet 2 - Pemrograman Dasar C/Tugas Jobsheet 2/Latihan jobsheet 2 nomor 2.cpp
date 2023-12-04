#include <stdio.h>

int main() {
    char nama[100], program_studi[100], fakultas[100];
    char nim[20];
    float nilai_praktikum, uts, uas, nilai_akhir;

    // Meminta inputan data mahasiswa
    printf("Masukkan Nama: ");
    scanf(" %[^\n]s", nama);

    printf("Masukkan NIM: ");
    scanf(" %[^\n]s", nim);

    printf("Masukkan Program Studi: ");
    scanf(" %[^\n]s", program_studi);

    printf("Masukkan Fakultas: ");
    scanf(" %[^\n]s", fakultas);

    printf("Masukkan Nilai Praktikum: ");
    scanf("%f", &nilai_praktikum);

    printf("Masukkan Nilai UTS: ");
    scanf("%f", &uts);

    printf("Masukkan Nilai UAS: ");
    scanf("%f", &uas);

    // Menghitung nilai akhir berdasarkan bobot
    nilai_akhir = 0.3 * nilai_praktikum + 0.3 * uts + 0.4 * uas;

    // Menampilkan nilai akhir
    printf("\n=== Nilai Akhir ===\n");
    printf("Nama: %s\n", nama);
    printf("NIM: %s\n", nim);
    printf("Program Studi: %s\n", program_studi);
    printf("Fakultas: %s\n", fakultas);
    printf("Nilai Akhir: %.2f\n", nilai_akhir);

    return 0;
}




