#include <stdio.h>

int main() {
    int N;
    printf("Kare Matris (NxN) icin boyut giriniz : ");
    scanf("%d", &N);
    int matris[N][N];
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            if (i == j)
                matris[i][j] = 1;
            else
                matris[i][j] = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("\t%d", matris[i][j]);
        }
    }
    printf("\n\n");
    return 0;
}
/*
 * Güney Yılmaz
 * 21.12.2023 18.43
 * Description: Klavyeden girilen satır ve sütun sayısına (N) göre birim matris oluşturan ve bu matrisi ekrana yazdıran programı yazınız.
 */