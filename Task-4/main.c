#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int x = rand() % 100 + 1;
    int points = 10, guess;
    printf("1 ve 100 arasinda bir sayi giriniz: ");

    while(1){
        if (points == 0){
            printf("Kaybettiniz sayi %d idi", x);
            break;
        }

        if (points == 5)
            printf("\nDikkat! Son 5 hakkiniz kaldi: ");

        scanf("%d", &guess);
        if (guess == x){
            printf("Tebrikler %d defada bildiniz %d puaniniz var", 10 - points, points * 10);
            break;
        }
        else if (guess > x)
            printf("Daha kucuk bir sayi giriniz: ");
        else
            printf("Daha buyuk bir sayi giriniz: ");
        points--;
    }

}
