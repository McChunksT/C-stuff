#include <stdio.h>

int main(void) 
{
  float number, result;
  printf("Input the number to be calculated: ");
  scanf("%f", &number);

  for (int i = 1; i <= number; i++)
  {
    result = (number * i);
    printf("%.0f * %i = %.0f\n", number, i, result);
  }
}