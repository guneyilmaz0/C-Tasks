#include <stdio.h>
#define length(a) (sizeof(a)/sizeof(*a))

int main() {
    int dizi[] = {7, 8, 5, 2, 4, 6, 3};
    for (int i = 1; i < length(dizi); i++) {
        int j = i;

        while (j > 0 && dizi[j - 1] > dizi[j]) {
            int temp = dizi[j];
            dizi[j] = dizi[j - 1];
            dizi[j - 1] = temp;
            j--;
        }
    }
    for (int i = 0; i < length(dizi); i++) {
        printf("%d\t ", dizi[i]);
    }
    return 0;
}
/*
 * Güney Yılmaz
 * 21.12.2023 19.52
 * Description: Insertion sort bir dizide en sondan ya da en baştan başlanmasına bağlı olarak sayıların
 * belirli bir kısmının sıralanmış olduğunu düşünerek, dışarıdan bir sonraki sayının içeriye alınıp sıralı
 * olduğu garanti edilen sayılar ile karşılaştırılması prensibine dayalı bir sıralama algoritmasıdır
 */