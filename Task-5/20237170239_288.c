#include <stdio.h>
#include "string.h"

int main() {
    char s[100];
    printf("Kelime Giriniz : ");
    scanf("%s", s);

    int len = strlen(s);
    int durum = 1;

    for (int i = 0; i < len / 2; i++) {
        if (s[i] != s[len - i - 1]) {
            durum = 0;
            break;
        }
    }

    if (durum == 1)
        printf("Palindrome bir kelime girdiniz\n");
    else
        printf("Palindrome olmayan bir kelime girdiniz\n");
    return 0;
}

/*
 * Güney Yılmaz
 * 03.01.2024 22.35
 * Description: Bu örnekte girilen kelimenin palindrome olup olmadığı ekrana yazdırılır.
 */

