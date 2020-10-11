#include <stdio.h>

int main() {
  int x, y, sub;
  
  printf("Enter first integer: ");
  scanf("%d", &x);
  printf("Enter second integer: ");
  scanf("%d", &y);
  
  sub = x + y;
  
  printf("The sum of two numbers is %d\n", sub);
  
  return 0;
}
