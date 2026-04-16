#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char tentukanGrade(float nilai) {
    if (nilai >= 80) return 'A';
    else if (nilai >= 65) return 'B';
    else if (nilai >= 55) return 'C';
    else if (nilai >= 45) return 'D';
    else return 'E';
}

int main() {
    FILE *file;
    char nama[100];
    float nilai;

    int jumlah = 0;
    float total = 0;

    int countA = 0, countB = 0, countC = 0, countD = 0, countE = 0;

    file = fopen("data.csv", "r");
    if (file == NULL) {
        printf("Gagal membuka file!\n");
        return 1;
    }

    printf("=== DATA MAHASISWA ===\n");

    while (fscanf(file, "%99[^,],%f\n", nama, &nilai) == 2) {
        char grade = tentukanGrade(nilai);

        printf("Nama: %s | Nilai: %.2f | Grade: %c\n", nama, nilai, grade);

        total += nilai;
        jumlah++;

        switch (grade) {
            case 'A': countA++; break;
            case 'B': countB++; break;
            case 'C': countC++; break;
            case 'D': countD++; break;
            case 'E': countE++; break;
        }
    }

    fclose(file);

    if (jumlah > 0) {
        float rata = total / jumlah;

        printf("\n=== SUMMARY ===\n");
        printf("Jumlah Mahasiswa : %d\n", jumlah);
        printf("Rata-rata Kelas : %.2f\n", rata);
        printf("Jumlah A : %d\n", countA);
        printf("Jumlah B : %d\n", countB);
        printf("Jumlah C : %d\n", countC);
        printf("Jumlah D : %d\n", countD);
        printf("Jumlah E : %d\n", countE);
    } else {
        printf("Tidak ada data.\n");
    }

    return 0;
}