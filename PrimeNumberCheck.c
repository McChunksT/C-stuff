#include <stdio.h>

int main(void) {

int num;
//request user to input a number
printf("Input a number: ");
scanf("%i", &num);

//determine if the number is prime
  for(int i = 2; i < num; i++)
  {
    if(num %i == 0)
    {
      printf("The number %i is not a prime number\n", num);
      return 0;
    }
  }
  printf("The numer %i is a prime number \n", num);
}