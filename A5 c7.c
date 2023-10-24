/*Ascii value of character*/
int askii(char a)
 {
     return (int)a;}
  int main() {
      char x;
      scanf("%c", &x);
  int aski= askii(x);
  printf("The ascii number is: %d", aski);
  return 0;}