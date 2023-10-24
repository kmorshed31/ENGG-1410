/* reads three double values and returns their sum*/
#include <stdio.h>
double sum( double a, double b, double c)
{
return (a+b+c);}
int main(){
    double x,y,z;
    scanf("%lf %lf %lf",&x,&y, &z);
    double total= sum(x,y,z);
    printf("%lf", total);
    return 0;}