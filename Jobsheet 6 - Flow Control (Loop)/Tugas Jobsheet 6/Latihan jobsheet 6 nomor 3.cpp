#include <stdio.h>

int main() {
    int rows = 5;
    for (int i = 1; i <= rows; i++) {
        int multiplier = 1;
        for (int j = 1; j <= i; j++) {
            printf("%d ", i * multiplier);
            multiplier++;
        }
        printf("\n");
    }
    return 0;
}
