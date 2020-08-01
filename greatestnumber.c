#include <stdio.h>

int main(void) {
  int num1, num2, num3;
  printf("Number 1: ");
  scanf("%i", &num1);

  printf("Number 2: ");
  scanf("%i", &num2);

  printf("Number 3: ");
  scanf("%i", &num3);

    if(num1 > num3 && num1 > num2)
    {
      printf("%i is the greatest number", num1);
    }
    else if(num2 > num1 && num2 > num3)
    {
      printf("%i is the greatest number", num2);
    }
    else
    {
      printf("%i is the greatest number", num3);
    }
}