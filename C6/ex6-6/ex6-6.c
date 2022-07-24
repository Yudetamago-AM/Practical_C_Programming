/* 1週間の労働時間と時間給を入力し，その週の賃金を算出する．
ただし，40時間を超えた分は残業時間として1時間を1.5時間とみなして計算する． */

#include <stdio.h>

int main(void) {
    char line[100];
    int hours, wage;
    int basic_pay = 0, overtime_pay = 0;
    
    printf("Enter \"hours wage\" of labor> ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d %d", &hours, &wage);

    if (hours > 40) {
        basic_pay = 40 * wage;
        overtime_pay = (int)(((hours - 40) * 3 * wage) / 2);
    } else {
        basic_pay = hours * wage;
    }
    printf("Pay: $%d", basic_pay + overtime_pay);

    return 0;
}