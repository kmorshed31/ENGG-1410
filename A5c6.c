/*Write a function to check whether a number is Even or Odd. It returns
 1 if Even, and
0 if Odd*/
#include <stdio.h>
int checker(int n){
    int check=n%2;
    if (check==1)
    {return 1;}
    else{return 0;}}
int main()
 { 
 int x;
 scanf("%d", &x);
 int q=checker(x);
 if (q==1){printf("The number is odd");}
 else{printf("The number is even");}
 
 
 return 0;}