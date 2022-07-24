/* 2点間の距離の2乗とおよびその値を用いて実際の距離を算出する． */

#include <stdio.h>

/* ニュートン法による平方根の計算　*/
double sqrt(double x) {
    /* y = sqrt(x)であるようなyを求める */
    double y, sqrt;

    if (x > 0) {
        /* yの初期値（sqrt(x)の値より大）を定める */
        if (x > 1) y = x;
        else y = 1;

        do {
            sqrt = y;
            /* y = (y * y + x) / (2 * y) の分子分母をyで割ってかけ算をなくす */
            y = (x / y + y) / 2;
        } while (y < sqrt);/* yの減少が止まるまで繰り返す */
        return sqrt;
    } else if (x != 0) {
        fprintf(stderr, "err: sqrt: x should be greater than zero");
    }

    return 0;
}

int main(void) {
    char line[100];
    int val[2][2]; /* index 00: x1, 01: y1, 10: x2, 11: y2 */
    int diff[2];/* index 0: x, 1: y */
    int counta, dist;

    /* 文字入力 */
    for (counta = 0; counta < 2; counta++) {
        printf("Enter \"x y\" of point %d> ", counta + 1);
        fgets(line, sizeof(line), stdin);
        sscanf(line, "%d %d", &val[counta][0], &val[counta][1]);
    }

    /* 計算 */
    for (counta = 0; counta < 2; counta++) {
        diff[counta] = val[0][counta] - val[1][counta];
    }
    dist = diff[0] * diff[0] + diff[1] * diff[1];

    /* 出力 */
    printf("Distance^2 == %d\n", dist);
    printf("Distance == %f\n", sqrt((double)dist));

    return 0;
}