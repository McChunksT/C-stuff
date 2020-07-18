#include <stdio.h>

int main(void) {

  float num1, num2;
  
  printf("Test data: ");
  scanf("%f%f", &num1, &num2);
  if (num1 == num2)
  {
    printf("These numbers are equal.\n");
  }
  else
  {
    printf("These numbers are not equal.\n");
  }
}