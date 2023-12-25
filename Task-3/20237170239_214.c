#include <stdio.h>

int main() {
    int Dizi[10];
    for (int i = 0; i < 10; i++) {
        printf("%d. sayiyi giriniz: ", i + 1);
        scanf("%d", &Dizi[i]);
    }
    return 0;
}

/*
 * Güney Yılmaz
 * 20.12.2023 18.24
 * Description: Klavyeden alınacak 10 adet sayıyı, daha önce tanımlanmış olan bir diziye aktaran programı yazınız.
 */