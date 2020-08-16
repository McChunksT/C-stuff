#include <stdio.h>

int main(void) {
  
  int size = 0, min = 0, max = 0;
  int j, k;

  printf("Enter the size of the array: ");
  scanf("%i", &size);

  int arr[size];

  printf("Enter the elements in the array: \n");
    for(int i = 0; i < size; i++)
    {
      printf("Element %i\n", i);
      scanf("%i", &arr[i]);
    }

  min = arr[0];
  max = min;

    for(int i = 1; i < size; i++)
    {
      if(arr[i] < min)
      {
      min = arr[i];
      }
      if(arr[i] > max)
      {
        max = arr[i];
      }
    }
  printf("The minimum element is:%i\n", min);
  printf("The maximum element is:%i\n", max);
}