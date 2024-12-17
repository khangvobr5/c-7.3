#include <stdio.h>

int main() {
    int mang[5] = {1, 2, 3, 4, 5};
    int coSoChan = 0;
    printf("Cac so chan trong mang la:\n");
    for (int i = 0; i < 5; i++) {
        if (mang[i] % 2 == 0) {
            printf("%d ", mang[i]);
            coSoChan = 1;
        }
    }
    if (!coSoChan) {
        printf("Mang khong chua so chan.\n");
    }
    return 0;
}

