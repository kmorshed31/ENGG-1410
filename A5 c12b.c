#include <stdio.h>

unsigned long  factorial(int n) {
    if (n < 0) {
        return 0; 
    }
    else if (n == 0 || n == 1) {
        return 1;  
    }
   else{ return n * factorial(n - 1);
}}

int main() {
    int n;
    scanf("%d", &n);
    unsigned long result = factorial(n);
    printf("Factorial of %d is %lu\n", n, result);
    return 0;
