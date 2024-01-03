#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int hak = 5, n, sayi = 0;
    srand(time(NULL));
    n = rand() % 20 + 1;

    do {
        printf("\n%d hak kaldi. Sayi Gir : ", hak);
        scanf("%d", &sayi);

        if (n > sayi) {
            printf("Sayiyi yukselt!");
            hak--;
        } else if (n < sayi) {
            printf("Sayiyi kucult!");
            hak--;
        } else {
            printf("\nTebrikler. %d tahminde buldunuz!", 5 - hak + 1);
            break;
        }

        if (hak <= 0)
            printf("\nKaybettin!\n");
    } while (hak > 0);
    return 0;
}

/*
 * Güney Yılmaz
 * 03.01.2024 22.29
 * Description: Bu örnekte rasgele sayı üretilerek kullanıcıdan tahmin istenir.
 */

