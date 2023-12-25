#include <stdio.h>

int main() {
    int baslangic, bitis, adim, toplam = 0;
    printf("Baslangic degerini giriniz: ");
    scanf("%d", &baslangic);
    printf("Bitis degerini giriniz: ");
    scanf("%d", &bitis);
    printf("Adim degerini giriniz: ");
    scanf("%d", &adim);
    for (int i = baslangic; i <= bitis; i += adim) {
        toplam += i;
    }
    printf("Toplam = %d", toplam);
    return 0;
}

/*
 * Güney Yılmaz
 * 19.12.2023 15.22
 * Description: Klavyeden başlangıç, bitiş ve adım miktarı sayıları alınacaktır.
 * Başlangıç ve Bitiş değerlerinin arasında kalan sayılar adım miktarına uygun şekilde toplayarak ekrana yazdıran programı yazınız.
 */