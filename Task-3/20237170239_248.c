#include <stdio.h>

int main() {
    int N, T = 0;
    printf("Kare Matris (NxN) icin boyut giriniz : ");
    scanf("%d", &N);
    int matris[N][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d. satir - %d. sutun : ", i + 1, j + 1);
            scanf("%d", &matris[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            T += matris[i][j];
    printf("Toplam = %d", T);
    return 0;
}

/*
 * Güney Yılmaz
 * 21.12.2023 18.27
 * Description: Değerleri klavyeden girilen bir matrisin tüm elemanları toplamını hesaplayan ve ekrana yazdıran programı yazınız.
 */