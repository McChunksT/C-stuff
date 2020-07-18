#include <stdio.h>

int main(void) {
int age;
  printf("Enter your age: ");
  scanf("%i", &age);

  if(age >= 18)
  {
    printf("Congratulations you are able to vote!\n");
  }
  else
  {
    printf("Sorry you are unable to vote.\n");
  }
}