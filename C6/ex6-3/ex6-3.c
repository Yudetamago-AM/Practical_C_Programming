/* ex6-2を修正し，正解率の1の位に基づいて+か-を付けて出力するようにする．
1の位 1-3: -, 4-7: <blank>, 8-0: + */

#include <stdio.h>

int main(void) {
    char line[100], grade[3];
    int score, unit;

    printf("Enter score (0 - 100)> ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &score);
    unit = score % 10;

    if (score < 0 || 100 < score) fprintf(stderr, "err: main: score shoud be greater than zero\n");
    else if (score <= 60) grade[0] = 'F';
    else if (score <= 70) grade[0] = 'D';
    else if (score <= 80) grade[0] = 'C';
    else if (score <= 90) grade[0] = 'B';
    else if (score <= 100) grade[0] = 'A';

    if (1 <= unit && unit <= 3) grade[1] = '-';
    else if (4 <= unit && unit <= 7) grade[1] = ' ';
    else grade[1] = '+';
    
    grade[3] = '\0';
    printf("Grade: %s\n", grade);

    return 0;
}