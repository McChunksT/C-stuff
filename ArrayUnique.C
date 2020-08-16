#include <stdio.h>

int main(void) {

int size = 0, sum = 0; 
int j, k, ctr = 0;
printf("Enter size of the array: ");
scanf("%i", &size);

int arr[size];

printf("Enter the elements in the array: \n");

  for(int i = 0; i < size; i++)
  {
    printf("Element %i\n", i);
    scanf("%i", &arr[i]);
  }
  printf("The Unique elements in the array are: \n");
   //loop through to check for duplicates
    for(int i = 0; i < size; i++)
    {
      ctr = 0;
  //loop through minus 1 to check if it is the same as i element
    for(int j=0; j<i-1; j++)
    {
      if(arr[i]==arr[j])
      {
        ctr++;
      }
    }
    //loop through again to see if plus 1 is same as i element
      for(int k=i+1; k<size; k++)
      {
        if(arr[i]==arr[k])
        {
          ctr++;
        }
      }
      if(ctr==0)
      {
        printf("%d ",arr[i]);
      }
  }
}