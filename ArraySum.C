#include <stdio.h>

int arr[], sum = 0, num, size;

int main(void) {
  printf("Enter size of the array:");
  scanf("%i", &size);
  
  int array[size];

  printf("Input %i elements into the array:\n", size);
  for(int i = 0; i < size; i++)
  {
      printf("Element %i: \n", i);

      scanf("%i", &arr[i]);

      sum += arr[i];
  } 
  printf("The sum of your array is %i", sum);
}