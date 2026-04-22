#include <stdio.h>
#include <string.h>

int main() { 

    char username[20];
    char password[20];
    int kesempatan = 3;
    char ulang;

    do {
        kesempatan = 3;

        while (kesempatan > 0) {

            printf("\n=== LOGIN SYSTEM ===\n");

            printf("Username: ");
            scanf("%19s", username);

            printf("Password: ");
            scanf("%19s", password);

            if (strcmp(username, "admin") == 0 && strcmp(password, "123") == 0) {
                printf("Login berhasil! Selamat datang %s\n", username);
                break;
            } else {
                kesempatan--;
                printf("Login gagal! Sisa percobaan: %d\n", kesempatan);
            }
        }

        if (kesempatan == 0) {
            printf("Akun diblokir sementara!\n");
        }

        printf("\nIngin mencoba lagi? (y/n): ");
        scanf(" %c", &ulang);

    } while (ulang == 'y' || ulang == 'Y');

    printf("Program selesai.\n");

    return 0;
}