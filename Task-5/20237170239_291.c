#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i = 0, j = 0;
    int loto[6];

    while (i < 6) {
        srand(time(NULL));
        int n = rand() % 50 + 1;
        int kontrol = 1;
        for (j = 0; j < i; j++) {
            if (loto[j] == n) {
                kontrol = 0;
                break;
            }
        }

        if (kontrol) {
            loto[i] = n;
            i++;
        }
    }
    printf("Loto Sayilari: ");
    for (i = 0; i < 6; i++) {
        printf("%d ", loto[i]);
    }

    return 0;
}

/*
 * Güney Yılmaz
 * 03.01.2024 22.49
 * Description: Bu örnekte rastgele loto sayıları oluşturulur ve ekrana yazdırılır.
 */

