#include <stdio.h>

// fungsi untuk menentukan grade
char tentukanGrade(float nilai) {
    if (nilai >= 80 && nilai <= 100) {
        return 'A';
    } else if (nilai >= 65) {
        return 'B';
    } else if (nilai >= 55) {
        return 'C';
    } else if (nilai >= 45) {
        return 'D';
    } else {
        return 'E';
    }
}

int main() {
    int jumlah, i;
    float nilai;

    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &jumlah);

    for (i = 1; i <= jumlah; i++) {
        printf("\nMahasiswa ke-%d\n", i);
        printf("Masukkan nilai: ");
        scanf("%f", &nilai);

        char grade = tentukanGrade(nilai);

        printf("Grade: %c\n", grade);
    }

    return 0;
}