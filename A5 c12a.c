#include <stdio.h>

unsigned long  factorial(int n) {
    unsigned long long result = 1;
    if (n < 0) {
        result=0;}
        else{for (int i = 1; i <= n; i++) {
        result *= i;
    }}
    return result;
}

int main() {
    int n ;
    scanf("%d", &n);
    unsigned long result = factorial(n);
    printf("Factorial of %d is %llu\n", n, result);
    return 0;
}