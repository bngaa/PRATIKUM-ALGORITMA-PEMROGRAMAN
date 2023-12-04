// created by Bunga Aprillia_23343030

#include <stdio.h>
//konversi detik ke dalam jam, menit dan sisa detik

int main() {
    int totalDetik, jam, menit, detikSisa;

    printf("Masukkan jumlah waktu dalam detik: ");
    scanf("%d", &totalDetik);

    jam = totalDetik / 3600;  // 1 jam = 3600 detik
    totalDetik %= 3600;       // Sisa detik setelah dihitung jam

    menit = totalDetik / 60;  // 1 menit = 60 detik
    detikSisa = totalDetik % 60;  // Sisa detik setelah dihitung menit

    printf("Hasil Output: %d Jam, %d Menit, %d Detik\n", jam, menit, detikSisa);

    return 0;
}
 


