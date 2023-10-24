/*Write a function that returns the average of an array of integers of variable length
passed to it. Parameters are array and length of an array*/
#include <stdio.h>
float avg(int n, int arr[n]){
    float sum=0;
    for (int i=0; i<n; i++){
        sum+=arr[i];}
     return (sum/n);}

int main(){
        int n;
        scanf("%d",&n);
        int arr[n];
         for (int i=0; i<n; i++){
        scanf("%d",&arr[i]);}
        float result=avg(n, arr);
        printf("%f", result);
        return 0;}