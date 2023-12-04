// created by Bunga Aprillia_23343030

#include <stdio.h>
#include <string.h>

void reverseString(char *str) {
    int length = strlen(str);

    // Tukar karakter dari awal ke akhir
    for (int i = 0, j = length - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char kalimat[100];

    printf("Masukkan kalimat: ");
    fgets(kalimat, sizeof(kalimat), stdin);

    // Hapus karakter newline jika ada
    int length = strlen(kalimat);
    if (kalimat[length - 1] == '\n') {
        kalimat[length - 1] = '\0';
    }

    // Terbalikkan kalimat
    reverseString(kalimat);

    printf("Kebalikannya: %s\n", kalimat);

    return 0;
}
