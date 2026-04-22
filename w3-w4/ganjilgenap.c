#include <stdio.h>

// fungsi untuk cek ganjil atau genap
void cekBilangan(int angka) {
    if (angka % 2 == 0) {
        printf("%d adalah bilangan GENAP\n", angka);
    } else {
        printf("%d adalah bilangan GANJIL\n", angka);
    }
}

int main() {
    int bilangan;

    printf("Masukkan sebuah bilangan: ");
    scanf("%d", &bilangan);

    cekBilangan(bilangan);

    return 0;
}