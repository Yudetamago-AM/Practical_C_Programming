/* 時間と分を入力すると合計時間を分で表示する． */

#include <stdio.h>

int main(void) {
    char line[100];
    int hour, minute, sum_minute;

    printf("Enter \"hours minutes\"> ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d %d", &hour, &minute);

    sum_minute = (hour * 60) + minute;
    printf("%dhour(s) %dminute(s) == %dminute(s)", hour, minute, sum_minute);

    return 0;
}