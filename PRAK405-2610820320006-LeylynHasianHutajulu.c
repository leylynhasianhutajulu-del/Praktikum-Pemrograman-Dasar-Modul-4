#include <stdio.h>

int main() {
    char baris[100];
    int n, k, i, j, jumlah, total, banyak;

    /* Input: n dan kelipatan (contoh: 3 2). Tekan Enter pada baris kosong untuk berhenti. */
    while (fgets(baris, sizeof(baris), stdin) != NULL) {
        banyak = sscanf(baris, "%d %d", &n, &k);
        if (banyak < 1)
            break;
        if (banyak == 1) {
            if (fgets(baris, sizeof(baris), stdin) == NULL)
                break;
            if (sscanf(baris, "%d", &k) != 1)
                break;
        }

        total = 0;
        for (i = 1; i <= n; i++) {
            jumlah = 0;
            for (j = i; j >= 1; j--) {
                if (j != i)
                    printf(" + ");
                printf("(%d * %d)", j, k);
                jumlah += j * k;
            }
            printf(" = %d\n", jumlah);
            total += jumlah;
        }
        printf("%d\n", total);
    }
    return 0;
}