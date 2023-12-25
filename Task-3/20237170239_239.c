#include <stdio.h>
#include <string.h>
#define length(a) (sizeof(a)/sizeof(*a))

int main() {
    char kelime[100];
    printf("Kelime giriniz: ");
    scanf("%s", kelime);
    int s[26] = {0};

    for (int i = 0; i < strlen(kelime); i++) {
        s[((int) kelime[i]) - 97]++;
    }

    for (int i = 0; i < length(s); i++) {
        if (s[i] != 0) {
            printf("\n %c\t%d", i + 97, s[i]);
        }
    }
    return 0;
}

/*
 * Güney Yılmaz
 * 21.12.2023 18.07
 * Description: Klavyeden küçük harfler ile girilecek bir kelimenin içerisinde hangi harften kaç adet geçtiğini bulan ve ekrana yazdıran programı yazınız.
 */