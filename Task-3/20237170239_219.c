#include <stdio.h>
#define length(a) (sizeof(a)/sizeof(*a))

int main() {
    double A[] = {1900, 2200, 2360, 2400, 3600, 3950, 4450, 4750, 4900, 6000};
    double B[length(A)];
    double k;
    printf("Maas zammi icin katsayi (k) giriniz: ");
    scanf("%lf", &k);
    for (int i = 0; i < length(A); i++) {
        B[i] = A[i] * k;
    }

    printf("\tEski\tYeni\tZam\n\n");
    for (int i = 0; i < length(A); i++) {
        printf("%d\t%.2lf\t%.2lf\t%.2lf\n", i + 1, A[i], B[i], B[i] - A[i]);
    }
    return 0;
}

/*
 * Güney Yılmaz
 * 21.12.2023 13.20
 * Description: Bir dizinin tüm elemanlarını, klavyeden girilecek bir kkatsayısı ile çarpan ve dizinin eski haliyle yeni halini ekrana yazdıran programı yazınız.
 */