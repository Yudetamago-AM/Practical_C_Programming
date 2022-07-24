/* ある年が閏年かそうでないか判断する．
西暦年数が4で割りきれる年は閏年（ただし100で割り切れるが400で割り切れない年は除く）． */

#include <stdio.h>

int main(void) {
    char line[100];
    int year;

    printf("Enter year> ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &year);

    if ((year % 100) == 0 && (year % 400) != 0) printf("%d is NOT bissextile year", year);
    else if ((year % 4) == 0) printf("%d is bissextile year", year);
    else printf("%d is NOT bissextile year", year);

    return 0;
}