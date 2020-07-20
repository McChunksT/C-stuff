#include <stdio.h>

int main(void) 
{
int num, factorial = 1;

printf("Imput the number: ");
scanf("%i", &num);

  for(int i = 1; i <= num; i++)
  {
    factorial = (factorial * i);
  }
  printf("The Factorial of %i is: %i", num, factorial);
}