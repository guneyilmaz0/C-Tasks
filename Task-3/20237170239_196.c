#include <stdio.h>

int Faktoriyel(int sayi) {
    int sonuc = 1;
    for (int i = 1; i <= sayi; i++) {
        sonuc *= i;
    }
    return sonuc;
}

int main() {
    int sayi;
    printf("Faktoriyel alinacak sayiyi giriniz: ");
    scanf("%d", &sayi);
    int sonuc = Faktoriyel(sayi);
    printf("Faktoriyel = %d", sonuc);
    return 0;
}

/*
 * Güney Yılmaz
 * 20.12.2023 00.28
 * Description: Parametre olarak aldığı sayının faktöriyelini hesaplayan fonksiyon/metot’u ve klavyeden alınacak değeri bu fonksiyon/metot’a gönderecek programı yazınız.
 */