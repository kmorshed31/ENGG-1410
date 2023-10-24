/*Write a function that takes in three float numbers and returns the largest value of them*/
#include <stdio.h>
float largest(float i,float j, float k){
    float large=0;
    if (i>j && i>k){large=i;}
    if (j>i && j>k){large=j;}
    if (k>j && k>k){large=k;}
    if (i==k or i==j or k==j){printf("No largest");}
    return large;
}
int main()
{
float a,b,c;
scanf("%f",&a);
scanf("%f",&b); 
scanf("%f",&c); 
float z= largest(a,b,c);
printf("Largest float value%f", z);
return 0;
}