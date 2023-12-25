#include <stdio.h>

int main() {
    int N;
    printf("Eleman sayisi (N) giriniz: ");
    scanf("%d", &N);
    int d[N];
    for (int i = 0; i < N; ++i) {
        printf("%d. elemani : ", i + 1);
        scanf("%d", &d[i]);
    }

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N - 1; ++j) {
            if (d[j] > d[j + 1]) {
                int temp = d[j];
                d[j] = d[j + 1];
                d[j + 1] = temp;
            }
        }
    }
    printf("\n\n---Siralanmis Dizi---\n\n");
    for (int i = 0; i < N; ++i) {
        printf("\t%d", d[i]);
    }
    return 0;
}

/*
 * Güney Yılmaz
 * 21.12.2023 18.14
 * Description: Klavyeden girilen sayılar ile bir dizi oluşturup, bu diziyi küçükten büyüğe sıralayan ve yeni halini ekrana yazdıran programı yazınız.
 */