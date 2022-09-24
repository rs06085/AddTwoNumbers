#include <stdio.h>//header file

int main() {
  int a, b, sum;//variable declaration
  //taking inputs from user
  printf("Enter first integer: ");
  scanf("%d", &a);
  printf("Enter second integer: ");
  scanf("%d", &b);
  //getting sum and storing it in a variable
  sum = a + b;
  //output
  printf("The sum of two numbers is %d\n", sum);
  
  return 0;
}
