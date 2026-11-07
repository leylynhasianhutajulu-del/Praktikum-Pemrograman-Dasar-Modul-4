#include <stdio.h>

int main() {
    char baris[100];
    int pilihan;
    double a, b;

    while (1) {
        printf("Pilih program\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");
        printf("Masukkan Pilihan : ");

        if (fgets(baris, sizeof(baris), stdin) == NULL)
            break;
        if (sscanf(baris, "%d", &pilihan) != 1)
            pilihan = 0;

        if (pilihan == 5) {
            printf("Terimakasih, telah menggunakan kalkulator Leylyn Hasian Hutajulu\n");
            break;
        } else if (pilihan >= 1 && pilihan <= 4) {
            printf("Masukkan nilai pertama : ");
            if (fgets(baris, sizeof(baris), stdin) == NULL || sscanf(baris, "%lf", &a) != 1) {
                printf("Input anda salah, silahkan coba lagi\n");
                continue;
            }
            printf("Masukkan nilai kedua : ");
            if (fgets(baris, sizeof(baris), stdin) == NULL || sscanf(baris, "%lf", &b) != 1) {
                printf("Input anda salah, silahkan coba lagi\n");
                continue;
            }

            if (pilihan == 1)
                printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f\n", a, b, a + b);
            else if (pilihan == 2)
                printf("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f\n", a, b, a - b);
            else if (pilihan == 3)
                printf("Hasil perkalian antara %.2f dengan %.2f adalah %.2f\n", a, b, a * b);
            else {
                if (b == 0)
                    printf("Pembagian dengan nol tidak bisa dilakukan\n");
                else
                    printf("Hasil pembagian antara %.2f dengan %.2f adalah %.2f\n", a, b, a / b);
            }
        } else {
            printf("Input anda salah, silahkan coba lagi\n");
        }
    }
    return 0;
}