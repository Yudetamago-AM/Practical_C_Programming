/* km/h を mile/h に変換する．
mile = km * 0.6213712 */

#include <stdio.h>
#define KM_H2MPH 0.6213712

int main(void) {
    char line[100];
    double mph, km_h;
    
    printf("Enter km/h> ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%lf", &mph);

    km_h = mph * KM_H2MPH;
    printf("%f(mile/h): %f(km/h)\n", mph, km_h);

    return 0;
}