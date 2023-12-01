#include <stdio.h>

int main(){
    printf("Faktoriyelini hesaplamak istediginiz sayiyi giriniz.\n");
    int carpim = 1, x;
    scanf("%d", &x);
    for (int i = x; i > 0; --i) {
        carpim *= i;
    }
    printf("%d sayisinin faktoriyeli: %d",x, carpim);
    return 0;
}