#include <stdio.h>

int calculate(int x) {
    if (x <= 100){
        return x;
    } else if (x <= 200){
        return x - (x / 10);
    } else if(x <= 400){
        return x - (x * 13 / 100);
    } else if(x <= 800){
        return x - (x * 17 / 100);
    } else {
        return x - (x * 2 / 10);
    }
}

void config(int musteri, char firma[100], int talep, int fiyat) {
    FILE *fp;
    fp = fopen("kayit.txt", "a");
    fprintf(fp, "%d. Musteri:\n Firma: %s\n Talep Miktari: %d\n Indirimli Fiyat: %d\n",musteri, firma, talep, calculate(fiyat));
    fclose(fp);
}

int main() {
    int talep, fiyat;
    char firma[100];
    for (int i = 0; i < 10; ++i) {
        printf("\nFirma adi giriniz: ");
        scanf("%s", firma);
        printf("\nTalep miktari giriniz: ");
        scanf("%d", &talep);
        printf("\nFiyat giriniz: ");
        scanf("%d", &fiyat);
        printf("\nKayitlar kayit.txt dosyasina eklenmistir.");
        config(i + 1, firma, talep, fiyat);
    }
    return 0;
}
