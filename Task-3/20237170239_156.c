#include <stdio.h>

int main() {
    int a, b;
    printf("Ilk sayiyi giriniz.\n");
    scanf("%d", &a);
    printf("Ikinci sayiyi giriniz.\n");
    scanf("%d", &b);
    int T = a + b;
    int F = a - b;
    int C = a * b;
    int B = a / b;
    printf("Toplam= %d, Fark= %d\nCarpim= %d, Bolum= %d", T, F, C, B);
    return 0;
}

/*
 * Güney Yılmaz
 * 19.12.2023 00.20
 * Description: Klavyeden okunan iki sayının toplamını, farkını, çarpımını ve ilk sayının ikinci sayıya olan bölümünü hesaplayan program.
 */