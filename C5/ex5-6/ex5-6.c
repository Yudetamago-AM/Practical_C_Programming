/* 時間を分（整数）で入力するとそれを時間と分に直して出力する． */

#include <stdio.h>

int main(void) {
    char line[100];
    int minute_in, hour_out, minute_out;

    printf("Enter minute(s) (in integer)> ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &minute_in);

    hour_out = (int)(minute_in / 60);
    minute_out = minute_in % 60;
    printf("%dminute(s) == %dhour(s) %dminute(s)", minute_in, hour_out, minute_out);

    return 0;
}