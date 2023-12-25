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

    printf("\t---Matrisin Normal Hali---\n\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("\t%d", matris[i][j]);
        }
        printf("\n\n");
    }
    printf("\n\n\t---Matrisin Transpozu Alinmis Hali---\n\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("\t%d", matris[j][i]);
        }
        printf("\n\n");
    }
    return 0;
}

/*
 * Güney Yılmaz
 * 21.12.2023 18.35
 * Description: Değerleri klavyeden girilen bir matrisin tüm elemanları toplamını hesaplayan ve ekrana yazdıran programı yazınız.
 */