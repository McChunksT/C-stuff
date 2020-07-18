#include <stdio.h>

int main(void)
{
  float K, M;

  printf("Enter Speed in Kilometers per hour: ");
  scanf("%f", &K);

  M = (K * 0.621371);

  printf("%f Miles per hour\n", M);
}