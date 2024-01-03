#include <stdio.h>

int Collatz(int x) {
    if (x == 1) return 1;
    else if (x % 2 == 0) return Collatz(x / 2);
    else return Collatz(3 * x + 1);
}

int main(){
    for(int i=1 ; i<= 1000 ; i++) {
        printf("%d\tCollatz->\t%d\n", i, Collatz(i));
    }
}

/*
 * Güney Yılmaz
 * 03.01.2024 22.13
 * Description: Bu örnekte 1 ile 1000 arasındaki sayılar Collatz teoremi ile yazılır.
 */

