#include <stdio.h>

int main(void) 
{
  //create float variables for celsius and fahrenheit
  float C, F;
  
  //prompt user to enter temp in celsius
  printf("Enter Temperature in C: ");
  
  //store user input in variable C
  scanf("%f", &C);
  
  //take given int and convert to fahrenheit
  F = (C * 9/5) + 32;
  
  //print result
  printf("%.2f\n", F);
}
//bhgetrn
