#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {

char *number;


//ask user to input a number
printf("Input a number: ");
scanf("%s", number);

char reverse[strlen(number)];
//create loop that swaps the last and first characters, then goes to the next to last and repeats until all numbers have been flipped

for(int i = 0; i < strlen(number); i++)
{
  if(!isdigit(number[i]))
  {
    printf("Did not input a number");
    return 1;
  }
  else
  {
    reverse[i] = number[strlen(number)- 1 - i];
  }
}
//display results to user
printf("The number reversed is: %s", reverse);
}