#include <stdio.h>
#include <math.h>

double taylor_sqrt(double x, double a);
double frac(double x);
double myindex(double x, int times);
double myabs(double x);

int main(void) {
    printf("taylor: %f", taylor_sqrt(0.1 - 1, 0.5));
}

double taylor_sqrt(double x, double a) {
    double ans = 1 + (a * x);
    double old_ans = x * 1000;
    for (int i = 2; ; i++) {
        double b = myindex(a, i);
        ans += (b / (double)frac(i)) * (double)pow(x, i);
        if (myabs(ans) > myabs(old_ans)) return old_ans;
        old_ans = ans;
        //printf("(myindex(%f, %d) / (double)frac(%d)) * (double)pow(%f, %d)\n", a, i, i, x, i);
        printf("taylor: %f\n", ans);
        if (b == 0) return ans;
    }
    return ans;
}

double frac(double x) {
    int ans = 1;
    for (int i = 1; i <= x; ++i) {
        ans *= (double)i;
    }
    return ans;
}

double myindex(double x, int times) {
    double ans = x;
    // x ... i == 1
    // x(x - 1) ... i == 2
    // x(x - 1)(x - 2) ... i == 3
    for (int i = 1; i < times; i++) {
        ans *= (x - (double)i);
    }
    return ans;
}

double myabs(double x) {
    if (x < 0) x *= (-1);
    return x;
}
