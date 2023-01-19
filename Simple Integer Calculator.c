#include <stdio.h>
int main(){
  int n1, n2, result;
  char operator;

  printf("      Simple Integer Calculator\n\nInstructions:\n   Enter a number, then the operator, then the subsequent number you wish to calculate.  Do not include any spaces. Your result will display on the next line.\n(Example: 6/2)\n");

while(1) {
  scanf("%d", &n1);
  scanf("%c", &operator);
  scanf("%d", &n2);

  switch(operator) {
  case'+':
    printf("%d\n\n", n1 + n2);
    break;

  case'-':
    printf("%d\n\n", n1 - n2);
    break;

  case'*':
    printf("%d\n\n", n1 * n2);
    break;

  case'/':
    printf("%d\n\n", n1 / n2);
    break;

  default:
    printf("Error, please read instructions and try again.\n");
    }
}
  return 0;
}
