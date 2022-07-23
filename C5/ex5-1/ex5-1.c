/* 摂氏を華氏に変換する．
F = 9/5 * C + 32 */

#include <stdio.h>

int main(void) {
    char line[100]; /* データ入力行 */
    double celsius, fahrenheit;

    printf("Enter temperature in Celsius> ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%lf", &celsius);

    fahrenheit = ((9 * celsius) / 5) + 32;
    printf("Fahrenheit: %f", fahrenheit);

    return 0;
}