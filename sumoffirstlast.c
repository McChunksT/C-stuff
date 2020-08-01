#include <stdio.h>
#include <math.h>

int main(void) {

int num, sum = 0, FirstDigit = 0, LastDigit = 0;


printf("Please input your number: ");
scanf("%i", &num);

LastDigit = num %10;

while(num >=10)
{
  num = num / 10;

  FirstDigit = floor(num);
}

sum = FirstDigit + LastDigit;

printf("The sum of the first and last digit is: %i\n", sum);
}