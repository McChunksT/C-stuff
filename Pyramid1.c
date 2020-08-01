#include <stdio.h>

int main(void) {
 
 int input, terms = 0;
  printf("Please input the number of rows: ");
  scanf("%i", &input);

  terms = (2 * input) - 1;

  for(int i = 1; i <= input; i++)
  { 
    for(int j = 1; j <= terms; j++)
    {
      if(j <= input - i)
      {
        printf(" ");
      }
      else if (j == input - i + 1)
      {
        printf("1");
      }
      else if(j < input)
      {
        printf("%i", j - (input - i));
      }
      else if(j == input)
      {
        printf("%i", i);
      }
      else if(j > input)
      {
        if(input - (j - i) < 1)
        {
          printf("\n");
          break;
        }
        else
        {
          printf("%i", input - (j - i));
        }
      }
    }
  }
}