#include <stdio.h>
#include <string.h>

int main() {
    char kelime[100];
    printf("Kelime giriniz: ");
    scanf("%s", kelime);

    for (int i = 0; i < strlen(kelime); i++) {
        kelime[i] = (char) (((int) kelime[i] + 15));
    }
    printf("\nSifreli Kelime: %s\n", kelime);
    return 0;
}

/*
 * Güney Yılmaz
 * 21.12.2023 13.37
 * Description: Büyük harfler ile yazılmış bir kelimeyi ASCII tablosuna göre şifreleyen ve şifrelenmiş halini ekrana yazdıran programı yazınız.
 */