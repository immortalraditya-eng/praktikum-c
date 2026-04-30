#include <stdio.h>
#include <string.h>
#include "string_utils.h"

int main() {
    char str[100];

    printf("Masukkan string: ");
    fgets(str, sizeof(str), stdin);

    // hapus enter
    str[strcspn(str, "\n")] = '\0';

    printf("\nString asli: %s\n", str);

    to_upper(str);
    printf("Uppercase: %s\n", str);

    reverse(str);
    printf("Reverse: %s\n", str);

    // balik lagi untuk cek palindrome
    reverse(str);

    if(is_palindrome(str)) {
        printf("Palindrome: YA\n");
    } else {
        printf("Palindrome: TIDAK\n");
    }

    return 0;
}