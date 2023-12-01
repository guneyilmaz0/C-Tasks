#include <stdio.h>

int fxy(int x, int y){
    printf("%d %d", x, y);
    return x * x + 2*y;
}
int xuzeriy(int x, int y){
    int sonuc = 1;
    for (int i = 0; i < y; i++) {
        sonuc *= x;
    }
    return sonuc;
}

int main(){
    printf("Hesap makinesi uygulamasina hos geldiniz.\n");
    printf("Islem yapmak icin 2 tane sayi giriniz.");
    int x, y, process;
    scanf("%d", &x);
    scanf("%d", &y);

    printf("Yapmak istediginiz islemi tuslayiniz.");
    printf("1-) Toplama, 2-) Cikarma, 3-) Bolme, 4-) Carpma, 5-) Us alma, 6-) Karesini alma, 7-)Karekokunu alma, 8-) f(x,y) = x^2 + 2y fonksiyonunu hesaplama.");
    scanf("%d", &process);
    switch (process) {
        case 1:
            printf("Toplam: %d", x + y);
            break;
        case 2:
            printf("Fark: %d", x - y);
            break;
        case 3:
            printf("Bolum: %d", x / y);
            break;
        case 4:
            printf("Carpim: %d", x * y);
            break;
        case 5:
            printf("x^y: %d", xuzeriy(x, y));
            break;
        case 6:
            printf("Kareleri: x: %d, y: %d", x^2,  y^2);
            break;
        case 7:
            printf("Karekokleri: x: %d, y: %d", x ^ (1/2), y ^ (1/2));
            break;
        case 8:
            printf("Fonksiyon degeri: %d", fxy(x, y));
            break;
        default:
            printf("Yanlis islem girdiniz");
            break;
    }
    return 0;
}