#include <stdio.h>
#define length(a) (sizeof(a)/sizeof(*a))

int main() {
    int dizi[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int ara, yer = -1;
    printf("Aramak istediginiz sayiyi giriniz: ");
    scanf("%d", &ara);
    for (int i = 0; i < length(dizi); i++) {
        if (dizi[i] == ara) {
            yer = i;
            break;
        }
    }
    if (yer != -1) {
        printf("Aranilan eleman bulundu. Indis numarasi: %d", yer);
    } else {
        printf("Aranilan eleman bulunamadi.");
    }
    return 0;
}

/*
 * Güney Yılmaz
 * 21.12.2023 13.31
 * Description: Klavyeden alınan sayının, dizide var olup olmadığını kontrol eden ve bu durumu ekrana yazan programı yazınız.
 */