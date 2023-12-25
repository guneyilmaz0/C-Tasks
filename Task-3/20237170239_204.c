#include <stdio.h>

int fib(int n) {
    if (n == 2 || n == 1)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}

int main() {
    int n;
    printf("Sira sayisini (n) giriniz: ");
    scanf("%d", &n);
    int sonuc = fib(n);
    printf("Sonuc = %d", sonuc);
    return 0;
}

/*
 * Güney Yılmaz
 * 20.12.2023 01.37
 * Description: Klavyeden alınan terim (n) sayısının, Fibonacci sayı serisinde sırasına göre karşılık gelen sayıyı bulup ekrana yazdıran programı yazınız.
 */