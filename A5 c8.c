/*Write a function to check whether a number is Positive or Negative or Zero. It returns
1 if positive, -1 if negative*/
int intcheck(int n){
    if (n>0)
      return 1;
    if (n<0)
      return -1;
    if (n==0)
      return 0;
}
int main(){
    int n;
    scanf("%d", &n);
    int num= intcheck(n);
    if (num==1) printf("The number is positive");
    if (num==-1) printf("The number is negative");
    if (num==0) printf("The number is zero");
    return 0;}