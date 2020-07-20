#include <stdio.h>

int main(void) 
{
  int terms, sum = 0, numbers;
  
  
  printf("Input the number of terms: ");
  scanf("%i", &terms);

  numbers = terms * 2;

  printf("The even natural numbers are: ");

  for(int i = 2; i <= numbers; i = i + 2)
  { 
    printf("%i ", i);
    
    sum = sum + i;
  }

    printf("\nThe sum of all even natural numbers is: %i", sum);
}