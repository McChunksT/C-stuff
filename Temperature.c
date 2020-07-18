#include <stdio.h>

int main(void) 
{
  //create int for celsius
  float C;
  //create int for fahrenheit
  float F;
  //prompt user to enter temp in celsius
  printf("Enter Temperature in C: ");
  scanf("%f", &C);
  //take given int and convert to fahrenheit
  F = (C * 9/5) + 32; 
  //print result
  printf("%.2f\n", F);


}
