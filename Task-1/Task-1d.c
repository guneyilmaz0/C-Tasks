#include <stdio.h>

int main(){
    printf("Oyuna baslamak icin 1-100 arasinda bir sayi giriniz.\n");
    int x, y;
    scanf("%d", &x);
    printf("Sayi belirlendi simdi sayiyi bulmak icin 1-100 arasinda bir sayi gir.\n");
    while (1){
        scanf("%d", &y);
        if (x > y){
            printf("Sayiyi arttir.\n");
        }else if(x < y){
            printf("Sayiyi azalt.\n");
        }else{
            printf("Tebrikler dogru sayiyi buldunuz.");
            break;
        }
    }
    return 0;
}