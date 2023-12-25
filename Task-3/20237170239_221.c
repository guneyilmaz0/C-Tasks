#include <stdio.h>
#define length(a) (sizeof(a)/sizeof(*a))

int main() {
    int A[] = {12, 18, 22, 10, 23, 28, 38, 56, 44, 74};
    int B[] = {38, 11, 14, 26, 16, 39, 43, 32, 20, 13};
    int C[length(A)];
    for (int i = 0; i < length(A); i++) {
        C[i] = A[i] + B[i];
    }
    printf("\tA+B = C\n");
    for (int i = 0; i < length(A); i++) {
        printf("\t%d+%d = %d\n", A[i], B[i], C[i]);
    }
    return 0;
}

/*
 * Güney Yılmaz
 * 21.12.2023 13.22
 * Description: İçleri dolu iki ayrı dizinin tüm elemanlarını karşılıklı olarak toplayan ve ekrana yazdıran programı yazınız.
 */