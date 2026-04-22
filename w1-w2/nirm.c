#include <stdio.h>

int main() {
    char nama[50];
    int nilai;

    // Input nama mahasiswa
    printf("Masukkan Nama: ");
    scanf("%s", nama);

    // Input nilai
    printf("Masukkan Nilai: ");
    scanf("%d", &nilai);

    // Output
    printf("\nNama : %s\n", nama);
    printf("Nilai : %d\n", nilai);

    return 0;
}