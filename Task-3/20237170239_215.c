#include <stdio.h>
#define length(a) (sizeof(a)/sizeof(*a))

int main() {
    int Dizi[] = {8, 10, 56, 12, 3, 5, 1, 8, 74, 6, 11, 89, 102, 25, 36};
    for (int i = 0; i < length(Dizi); i++) {
        printf("%d. elemanin degeri: %d\n", i + 1, Dizi[i]);
    }
    return 0;
}

/*
 * Güney Yılmaz
 * 20.12.2023 18.28
 * Description: Tanımlanmış ve içi dolu olarak varsayılan bir dizinin tüm elemanlarına ulaşan ve ekrana yazdıran programı yazınız.
 */