#include <stdio.h>

int func(int x) {
    if (x < 0) {
        return ((x * x) * -3) + 5;
    } else {
        return ((x * x) * 3) + 5;
    }
}

int main() {
    int x = 0;
    for (int i = -9; i < 10; i = i + 3) {
        x++;
        if (x != 5) continue;
        printf("Dongunun 5. degeri:(%d) = %d\n", i, func(i));
    }
}