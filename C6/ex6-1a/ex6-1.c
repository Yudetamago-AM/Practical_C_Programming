/* 2点間の距離の2乗とおよびその値を用いて実際の距離を算出する． */

#include <stdio.h>
#include <math.h>

int main(void) {
    char line[100];
    int val[2][2]; /* index 00: x1, 01: y1, 10: x2, 11: y2 */
    int diff[2];/* index 0: x, 1: y */
    int counta, dist;

    /* 文字入力 */
    printf("Enter \"x y\" of point 1> ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d %d", &val[0][0], &val[0][1]);

    printf("Enter \"x y\" of point 2> ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d %d", &val[1][0], &val[1][1]);

    /* 計算 */
    diff[0] = val[0][0] - val[1][0];
    diff[1] = val[0][1] - val[1][1];
    dist = diff[0] * diff[0] + diff[1] * diff[1];

    /* 出力 */
    printf("Distance^2 == %d\n", dist);
    printf("Distance == %f\n", sqrt((double)dist));

    return 0;
}