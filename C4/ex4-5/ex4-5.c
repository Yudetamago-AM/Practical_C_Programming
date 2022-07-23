/* 以下の誤りがあるプログラムを意図的に作成する．
1. %d変換を使って浮動小数点を出力する．
2. %f変換を使って整数型を出力する．
3. %d変換を使って文字型を出力する． */

#include <stdio.h>

int main(void) {
    float pi = 3.14;
    int num = 314;
    char charA = 'A';

    printf("float/double: %d\n", pi);
    printf("integer: %f\n", num);
    printf("string: %d\n", charA);/* cf.文字コード */

    return 0;
}