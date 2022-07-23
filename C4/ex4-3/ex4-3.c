/* 横3インチ，縦5インチの長方形の面積と外周を算出する．
また，横6.8インチ，縦2.3インチの長方形の面積と外周を計算する． */

#include <stdio.h>

int main(void) {
    printf("3 * 5 inch:\n");
    printf("area: %d\n", 3 * 5);
    printf("perimeter: %d\n", 3 + 5);

    printf("\n");

    printf("6.8 * 2.3 inch:\n");
    printf("area: %f\n", 6.8 * 2.3);
    printf("perimeter: %f\n", 6.8 + 2.3);

    return 0;
}