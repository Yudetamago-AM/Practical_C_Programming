/* 縦，横の長さを指定して長方形の周の長さを出力する．
周の長さ = 2 * (横の長さ + 縦の長さ) */

#include <stdio.h>

int main(void) {
    char line[100];/* 入力行 */
    int width, height, perimeter;

    printf("Enter \"width height\" (in integer)> ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d %d", &width, &height);

    perimeter = 2 * (width + height);
    printf("Perimeter: %d\n", perimeter);

    return 0;
}