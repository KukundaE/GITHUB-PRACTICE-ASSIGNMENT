#include <stdio.h>
#include <stdlib.h>

int main(){
  int a, b;
  printf("Enter two integers: ");
  scanf("%d %d", &a, &b);
  printf("Sum is %d\n", a + b);
  printf("Product is %d\n", a * b);
  printf("Difference is %d\n", a - b);
  printf("Quotient is %d\n",a / b);
  printf("Remainder is %d\n",a % b);
    return 0;
}
