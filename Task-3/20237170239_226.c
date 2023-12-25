#include <stdio.h>
#define length(a) (sizeof(a)/sizeof(*a))

int main() {
    int dizi[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int a, b;
    printf("Birinci indis (a) giriniz: ");
    scanf("%d", &a);
    printf("Ikinci indis (b) giriniz: ");
    scanf("%d", &b);
    int temp = dizi[a];
    dizi[a] = dizi[b];
    dizi[b] = temp;
    for (int i = 0; i < length(dizi); i++) {
        printf("\t%d", dizi[i]);
    }
    return 0;
}

/*
 * Güney Yılmaz
 * 21.12.2023 13.28
 * Description: Bir diziyi tersine çeviren ve dizinin son halini ekrana yazdıran programı yazınız.
 */