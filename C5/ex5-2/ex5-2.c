/* 球の体積を計算する．
V = 4/3 * pi * r^3 */

#include <stdio.h>
#define PI 3.14159265358979

int main(void) {
    char line[100]; /* 入力行 */
    int radius;
    double volume;

    printf("Enter radius of a sphere (in integer)> ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &radius);

    volume = ((4 * PI) / 3) * (double)(radius * radius * radius);
    printf("Volume: %f\n", volume);

    return 0;
}