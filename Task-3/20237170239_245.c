#include <stdio.h>

int main() {
    int N;
    printf("Kare Matris (NxN) icin boyut giriniz:");
    scanf("%d", &N);
    int matris[N][N];
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            printf("%d. satir - %d. sutun : ", i + 1, j + 1);
            scanf("%d", &matris[i][j]);
        }
        printf("\n");
    }
    return 0;
}

/*
 * Güney Yılmaz
 * 21.12.2023 18.20
 * Description: Klavyeden girilen N değerine göre NxN boyutunda bir kare matris oluşturan ve klavyeden tüm değerlerini okuyan programı yazınız.
 */