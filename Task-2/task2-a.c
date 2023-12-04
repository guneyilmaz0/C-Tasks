#include <stdio.h>

int main() {
    int n;
    int x = 0;
    int y = 0;
    double avg = 0;
    double k = 0;
    double l = 0;

    printf("Bir N degeri giriniz: ");
    scanf("%d", &n);

    int matrix[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("[%d][%d]:\n", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] >= 0) {
                x++;
                k += matrix[i][j];
            } else {
                y++;
                l += matrix[i][j];
            }
            avg += matrix[i][j];
        }
    }

    printf("Pozitif eleman sayisi: %d\n", x);
    printf("Pozitif elemanlarin ortalamasi: %f\n", k / x);
    printf("Negatif eleman sayisi: %d\n", y);
    printf("Negatif eleman ortalamasi: %f\n", l / y);
    printf("Elemanlarin ortalamasi: %f", avg / n / n);
}