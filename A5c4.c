/*Write a function that displays a line of stars of variable length depending on the nu-
merical value passed to it. Name the function printStars with formal parameters of one
integer.
So printStarts (5) will result in ***** being printed on the screen, while printStars(10)
will print 10 stars ***********   */
#include <stdio.h>

char printStars(int k){
    for(int i=0; i<k; i++){
        printf("*");
        }}
int main(){
  int n;
  scanf("%d", &n);
  printStars(n);
  return 0;
}