#include <stdio.h>

int main() {
  int a, b, sum;
  
  printf("Enter the first integer: ");
  scanf("%d", &a);
  printf("Enter the second integer: ");
  scanf("%d", &b);
  
  sum = a + b;
  
  printf("The sum of two numbers is %d\n", sum);
  
  return 0;
}
