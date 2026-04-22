#include <stdio.h>

#define PI 3.14

float hitungLuas(float r) {
    return PI * r * r;
}

float hitungKeliling(float r) {
    return 2 * PI * r;
}

int main() {
    int pilihan;
    float r;

    do {
        printf("\n1. Luas\n2. Keliling\n3. Keluar\n");
        printf("Pilih: ");
        scanf("%d", &pilihan);

        if (pilihan == 1 || pilihan == 2) {
            printf("Masukkan jari-jari: ");
            scanf("%f", &r);

            if (r < 0) {
                printf("Tidak boleh negatif!\n");
                continue;
            }

            if (pilihan == 1)
                printf("Luas = %.2f\n", hitungLuas(r));
            else
                printf("Keliling = %.2f\n", hitungKeliling(r));
        }

    } while (pilihan != 3);

    return 0;
}