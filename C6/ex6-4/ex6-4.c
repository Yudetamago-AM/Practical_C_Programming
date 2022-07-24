/* 指定された金額（1ドル以下）について，その内訳となる
25セント硬貨，10セント硬貨，5セント硬貨，1セント硬貨の枚数を計算する． */

#include <stdio.h>

int main(void) {
    char line[100];
    int amount, twentyfive, ten, five, one;

    printf("Enter amount (< 1 dollar)> ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &amount);

    twentyfive = amount / 25;
    ten = (amount - twentyfive * 25) / 10;
    five = (amount - twentyfive * 25 - ten * 10) / 5;
    one = amount - twentyfive * 25 - ten * 10 - five * 5;

    printf("25 cents: %d\n", twentyfive);
    printf("10 cents: %d\n", ten);
    printf("5  cents: %d\n", five);
    printf("1  cent : %d\n", one);

    return 0;
}