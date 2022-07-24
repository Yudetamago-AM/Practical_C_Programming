/* 数値（正解率％）で入力された成績を文字で表して出力する．
F: 0-60, D: 61-70, C: 71-80, B:81-90, A:91-100 */

#include <stdio.h>

int main(void) {
    char line[100], grade;
    int score;

    printf("Enter score (0 - 100)> ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &score);

    if (score < 0 || score > 100) fprintf(stderr, "err: main: score shoud be greater than zero\n");
    else if (score <= 60) grade = 'F';
    else if (score <= 70) grade = 'D';
    else if (score <= 80) grade = 'C';
    else if (score <= 90) grade = 'B';
    else if (score <= 100) grade = 'A';

    printf("Grade: %c\n", grade);

    return 0;
}