#include <string.h>
#include <ctype.h>
#include "string_utils.h"

// Membalik string
void reverse(char str[]) {
    int i, len = strlen(str);
    char temp;

    for(i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

// Cek palindrome
int is_palindrome(const char str[]) {
    int i, len = strlen(str);

    for(i = 0; i < len / 2; i++) {
        if(str[i] != str[len - i - 1]) {
            return 0;
        }
    }
    return 1;
}

// Ubah ke huruf besar
void to_upper(char str[]) {
    int i;
    for(i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
}