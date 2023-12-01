#include <stdio.h>

int main() {
    int n, x = 0, y = 1;
    printf("Bir sayi giriniz.");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("%d ", x);
        int z = x;
        x = y;
        y = z + x;
    }

    return 0;
}
