#include <stdio.h>
#define length(a) (sizeof(a)/sizeof(*a))

int main() {
    int Dizi[] = {2, 5, 12, 17, 8, 9, 1, 33};
    int T = 0;
    for (int i = 0; i < length(Dizi); i++) {
        T += Dizi[i];

        printf("%d+", Dizi[i]);
    }
    printf("=%d", T);
    return 0;
}

/*
 * Güney Yılmaz
 * 21.12.2023 13.14
 * Description: Tam sayıları barındıran bir dizinin içerisindeki tüm sayıları toplayan ve ekrana yazdıran programı yazınız.
 */