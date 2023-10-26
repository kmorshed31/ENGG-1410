#include <stdio.h>

double power(double base, int exponent) {
    if (exponent == 0) {
        return 1;
    } else if (exponent > 0) {
        return base * power(base, exponent - 1);
    } else {
        printf("Invalid\n");
       
    }
}

int main() {
    double base ;
    scanf("%lf", &base);
    int exponent = -3;
    scanf("%d",&exponent);
    double result = power(base, exponent);
    if (exponent>=0){printf("%lf^%d = %lf\n",base, exponent, result);}
    return 0;
}