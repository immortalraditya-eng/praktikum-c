#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    char input[100];
    double a, b, hasil;
    char op[10];

    printf("=== KALKULATOR FORMAT (ketik q untuk keluar) ===\n");

    while (1) {
        printf("\nMasukkan operasi (contoh: 3 + 4 atau sqrt 9): ");
        fgets(input, sizeof(input), stdin);

        // Hapus newline
        input[strcspn(input, "\n")] = 0;

        // Cek keluar
        if (strcmp(input, "q") == 0 || strcmp(input, "Q") == 0) {
            printf("Keluar dari program.\n");
            break;
        }

        // Coba format: angka operator angka
        if (sscanf(input, "%lf %s %lf", &a, op, &b) == 3) {

            if (strcmp(op, "+") == 0) {
                hasil = a + b;
            } else if (strcmp(op, "-") == 0) {
                hasil = a - b;
            } else if (strcmp(op, "*") == 0) {
                hasil = a * b;
            } else if (strcmp(op, "/") == 0) {
                if (b != 0)
                    hasil = a / b;
                else {
                    printf("Error: Pembagian nol!\n");
                    continue;
                }
            } else if (strcmp(op, "^") == 0) {
                hasil = pow(a, b);
            } else {
                printf("Operator tidak dikenali!\n");
                continue;
            }

            printf("Hasil: %.2lf\n", hasil);
        }

        // Coba format: sqrt angka
        else if (sscanf(input, "%s %lf", op, &a) == 2) {
            if (strcmp(op, "sqrt") == 0) {
                if (a >= 0) {
                    hasil = sqrt(a);
                    printf("Hasil: %.2lf\n", hasil);
                } else {
                    printf("Error: akar negatif!\n");
                }
            } else {
                printf("Format tidak dikenali!\n");
            }
        }

        else {
            printf("Input tidak valid!\n");
        }
    }

    return 0;
}