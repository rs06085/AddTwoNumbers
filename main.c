#include <stdio.h>

int main() {
  float a, b, sum;
  
  printf("Enter first real number: ");
  scanf("%f", &a);
  printf("Enter second real number: ");
  scanf("%f", &b);
  
  sum = a + b;
  
  printf("The sum of two numbers is %f\n", sum);
  
  return 0;
}
