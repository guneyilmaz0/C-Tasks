#include <stdio.h>

int main() {
    int taban, kuvvet, sonuc = 1;
    printf("Ussu alinacak sayiyi (taban) giriniz: ");
    scanf("%d", &taban);
    printf("Us kuvvetini (kuvvet) giriniz: ");
    scanf("%d", &kuvvet);
    for (int i = 0; i < kuvvet; i++) {
        sonuc *= taban;
    }
    printf("%d", sonuc);
    return 0;
}

/*
 * Güney Yılmaz
 * 19.12.2023 16.34
 * Description: Klavyeden alınacak taban ve üs kuvveti değerlerine göre üs alma işlemini gerçekleştirip sonucu ekrana yazdıracak programı yazınız.
 */