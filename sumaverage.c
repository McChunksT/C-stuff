#include <stdio.h>

int main(void) {
//create variables for inputs, sum, and average
float num, sum = 0, avg;
//ask for 10 number inputs
//find the sum of all 10 numbers that were typed
  for (int i = 0; i < 10; i++)
  {
    printf("Number %i: ", i + 1);
    scanf("%f", &num);
    sum += num;
  }
  avg = sum / 10;
  printf("The sum of your numbers is: %.5f\nThe avg of your numbers is: %.5f\n", sum, avg);
}