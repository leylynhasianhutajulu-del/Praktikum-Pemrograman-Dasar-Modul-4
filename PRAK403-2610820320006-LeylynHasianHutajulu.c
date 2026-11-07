#include <stdio.h>

int main() {
    char baris[100];
    int a, b, x, y, langkah, n;

    /* Input: angka pertama dan angka kedua (contoh: 3 7). Tekan Enter pada baris kosong untuk berhenti. */
    while (fgets(baris, sizeof(baris), stdin) != NULL) {
        n = sscanf(baris, "%d %d", &a, &b);
        if (n < 1)
            break;
        if (n == 1) {
            if (fgets(baris, sizeof(baris), stdin) == NULL)
                break;
            if (sscanf(baris, "%d", &b) != 1)
                break;
        }

        if (a <= b)
            langkah = 1;
        else
            langkah = -1;

        x = a;
        while (1) {
            y = a + b - x;
            if (x != a)
                printf(" - ");
            printf("%d %d", x, y);
            if (x == b)
                break;
            x += langkah;
        }
        printf("\n");
    }
    return 0;
}