#include <stdio.h>
#define length(a) (sizeof(a)/sizeof(*a))

int main() {
    int dizi[] = {7, 8, 5, 2, 4, 6, 3};
    for (int i = 0; i < length(dizi) - 1; i++) {
        for (int j = 0; j < length(dizi) - 1 - i; j++) {
            if (dizi[j + 1] < dizi[j]) {
                int temp = dizi[j + 1];
                dizi[j + 1] = dizi[j];
                dizi[j] = temp;
            }
        }
    }
    for (int i = 0; i < length(dizi); i++) {
        printf("%d\t", dizi[i]);
    }
    return 0;
}

/*
 * Güney Yılmaz
 * 21.12.2023 20.12
 * Description: Bubble sort bir dizideki sayıların baştan sona tüm sayılar sıralanmış olana kadar ikişerli
 * karşılaştırmalar ile doğru yerlere yerleştirilme prensibine  dayalı  bir  sıralama  algoritmasıdır.
 * Insertion  sort’un  aksine  her  bir iterasyonda toplam kaç iş yapılacağı belli olduğu için en iyi
 * ve en kötü durumdaki algoritma karmaşıklığı aynıdır. Bu nedenle sıralı olduğu garanti edilse dahi çok
 * fazla sayı içeren dizilerde uygulanması performans kaybına neden olacaktır.
 */