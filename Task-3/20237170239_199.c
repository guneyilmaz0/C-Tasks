#include <stdio.h>

int Faktoriyel(int sayi) {
    int sonuc = 1;
    for (int i = 1; i <= sayi; i++) {
        sonuc *= i;
    }
    return sonuc;
}

int main() {
    int n, r;
    printf("Eleman sayisi (n) giriniz: ");
    scanf("%d", &n);
    printf("Secim sayisi (r) giriniz: ");
    scanf("%d", &r);
    int sonuc = Faktoriyel(n) / Faktoriyel(n - r);
    printf("Permutasyon = %d", sonuc);
    return 0;
}

/*
 * Güney Yılmaz
 * 20.12.2023 00.45
 * Description: Klavyeden alınacak eleman sayısı ve seçim sayısına göre permütasyon hesabını yapıp, ekrana yazdıracak programı yazınız.
 */