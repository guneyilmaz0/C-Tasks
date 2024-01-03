#include <stdio.h>
#include <string.h>

int basamakTopla(int sayi) {
    int toplam = 0;
    while (sayi != 0) {
        toplam += sayi % 10;
        sayi /= 10;
    }
    return toplam;
}

int main() {
    char no[17];
    printf("Kredi karti no giriniz : ");
    scanf("%s", no);

    int tekler = 0, ciftler = 0;

    for (int i = 0; i < 16; i++) {
        if (i % 2 == 0)
            ciftler += basamakTopla(2 * ((int)(no[i] - '0')));
        else
            tekler += ((int)(no[i] - '0'));
    }

    if ((tekler + ciftler) % 10 == 0)
        printf("Dogru Kart Numarasi!\n");
    else
        printf("Yanlis Kart Numarasi!\n");

    return 0;
}

/*
 * Güney Yılmaz
 * 03.01.2024 23.25
 * Description: Bu örnekte girilen 16 haneli bir kredi kartı numarası luhn algoritması ile kontrol edilir.
 */

