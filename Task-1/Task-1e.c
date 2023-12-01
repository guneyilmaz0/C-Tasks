#include <stdio.h>
#include "string.h"

int main() {
    int password;
    char username[4] = "";
    int counter = 3;
    printf("Hos geldiniz!\nSisteme giris yapmak icin kullanici adi ve sifrenizi giriniz.\n");

    while (counter > 0){
        scanf("%s", username);
        scanf("%d", &password);

        if (password == 1234 && strcmp("oku", username) == 0){
            printf("Basariyla giris yaptiniz!");
            return 0;
        } else{
            counter--;
            printf("Hatali giris denemesi yaptiniz!\nKalan hakkiniz %d\n", counter);
            if (counter != 0){
                printf("Tekrar kullanici adi ve sifre giriniz\n");
            }
        }
    }

    printf("Maalesef sisteme giris yapma hakkiniz doldu daha sonra tekrar deneyiniz.");
    return 1;
}