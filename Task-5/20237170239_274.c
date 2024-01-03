#include <stdio.h>

int main() {
    for (int n = 2; n <= 10000; n++) {
        int CT = 0;
        for (int i = 1; i < n; i++) {
            if (n % i == 0) CT += i;
        }
        if (CT % n == 0)
            printf("%d\n", n);
    }
    return 0;
}

/*
 * Güney Yılmaz
 * 02.01.2024 14.27
 * Description: Bu örnekte 2 ile 10,000 arasındaki tüm sayılar için mükemmel sayı olup olmadıkları kontrolü yapılacaktır.
 */

