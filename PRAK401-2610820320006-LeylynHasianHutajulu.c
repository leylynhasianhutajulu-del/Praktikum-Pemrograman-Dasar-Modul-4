#include <stdio.h>

int main() {
    char baris[100], simbol[20];
    int kelipatan, i, n;

    /* Input: kelipatan dan simbol (contoh: 6 *). Tekan Enter pada baris kosong untuk berhenti. */
    while (fgets(baris, sizeof(baris), stdin) != NULL) {
        n = sscanf(baris, "%d %19s", &kelipatan, simbol);
        if (n < 1)
            break;
        if (n == 1) {
            if (fgets(baris, sizeof(baris), stdin) == NULL)
                break;
            if (sscanf(baris, "%19s", simbol) != 1)
                break;
        }

        for (i = 1; i <= 50; i++) {
            if (i > 1)
                printf(" ");
            if (i % kelipatan == 0)
                printf("%s", simbol);
            else
                printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}