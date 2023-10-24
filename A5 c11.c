/*Write a function that will print on screen a right-angle triangle of a passed length and
a specific character. so a function call from the main function as Triangle( 5 , ’A’) will
result into
A
AA
AAA
AAAA
AAAAA
While Triangle( 7, ’B’) will print:
B
BB
BBB
BBBB
BBBBB
BBBBBB
BBBBBBB*/
#include <stdio.h>
void shape(int i, char a){
        for (int j=1; j<(i+1); j++){
            for (int k=0; k<j; k++)
        {printf("%c", a);}
        printf("\n");}}
        
int main(){
   int n;
   char a;
   scanf("%d",&n);
   scanf(" %c", &a);
   shape(n, a);
   return 0;}