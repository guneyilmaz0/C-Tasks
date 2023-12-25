#include <stdio.h>

int main() {
    int a, b;
    do {
        printf("Mod'u alinacak sayiyi (a) giriniz: ");
        scanf("%d", &a);
        printf("Hangi Mod’un alinacagini (b) giriniz: ");
        scanf("%d", &b);
        printf("%d mod %d = %d\n", a, b, a % b);
    } while (a != 0);
    printf("0 sayisi girildi ve cikildi");
    return 0;
}

/*
 * Güney Yılmaz
 * 19.12.2023 15.07
 * Description: Klavyeden 0 değeri girilene kadar, ikili gruplar halinde sayılar alan ve ilk sayının ikinci sayıya bölümünden kalanını hesaplayan program.
 */