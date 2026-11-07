#include <stdio.h>

int main() {
    char baris[100];
    int n, i, awal;

    /* Input: batas maksimal. Tekan Enter pada baris kosong untuk berhenti. */
    while (fgets(baris, sizeof(baris), stdin) != NULL) {
        if (sscanf(baris, "%d", &n) != 1)
            break;

        for (i = 1; i <= n; i += 2) {
            if (i > 1)
                printf(" ");
            printf("%d", i);
        }
        printf("\n");

        if (n % 2 == 0)
            awal = n;
        else
            awal = n - 1;

        for (i = awal; i >= 2; i -= 2) {
            if (i != awal)
                printf(" ");
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}