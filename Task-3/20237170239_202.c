#include <stdio.h>

int main() {
    int n, T1 = 1, T2 = 1, T3;
    printf("Terim sayisi (n) giriniz: ");
    scanf("%d", &n);

    printf("\t %d \t %d", T1, T2);
    for (int i = 1; i <= n - 2; i++) {
        T3 = T1 + T2;
        printf("\t %d", T3);
        T1 = T2;
        T2 = T3;
    }
    return 0;
}

/*
 * Güney Yılmaz
 * 20.12.2023 01.25
 * Description: Klavyeden alınan indis (n) sayısına göre Fibonacci sayı serisinin ilk n terimini ekrana yazdıran programı yazınız.
 */