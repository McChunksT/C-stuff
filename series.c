#include <stdio.h>
#include <math.h>

int main(void) {

  int terms, sum = 0, number = 0;

//ask for number of terms
  printf("What is the number of terms: ");
  scanf("%i", &terms);

//make a series that starts with 1, and adds another 1 onto it for each term
  for(int i = 0; i < terms; i++)
  {
    number+= pow(10, i);
    if(i == terms -1)
    {
      printf("%i ", number);
    }
    else
    {
      printf("%i + ", number);
    }
//find sum of the series
    sum += number;
  }
//print results

printf("\nThe sum of the series is: %i\n", sum);
}