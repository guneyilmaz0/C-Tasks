#include <stdio.h>

int main() {
    int n;
    printf("Bir N degeri giriniz: ");
    scanf("%d", &n);

    //Matrix 1
    printf("1. Matris\n");
    int matrix1[n][n];
    int biggest1 = matrix1[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("[%d][%d]:\n", i, j);
            scanf("%d", &matrix1[i][j]);

            if (matrix1[i][j] > biggest1) biggest1 = matrix1[i][j];
        }
    }

    //Matrix 2
    printf("2. Matris\n");
    int matrix2[n][n];
    int biggest2 = matrix2[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("[%d][%d]:\n", i, j);
            scanf("%d", &matrix2[i][j]);

            if (matrix2[i][j] > biggest2) biggest2 = matrix2[i][j];
        }
    }

    printf("Matrislerdeki en buyuk 2 sayinin toplami:\n%d", biggest1 + biggest2);
}