#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int say = 0;

    while (1) {
        double x = rand() % 10 + 1;
        double y = rand() % 10 + 1;
        double z = rand() % 10 + 1;

        double dene = 10 + x + y / z + y * y + x / x;
        say++;

        if (dene == (int)dene && dene != 0.0) {
            printf("x = %lf\n", x);
            printf("y = %lf\n", y);
            printf("z = %lf\n", y);
            printf("Denklem Sonucu = %lf\n", dene);
            printf("Toplam %d adimda bulundu!\n", say);
            break;
        }
    }
    return 0;
}

/*
 * Güney Yılmaz
 * 03.01.2024 23.04
 * Description: Bu örnekte rasgele sayılar üretilerek denklem çözülür.
 */

