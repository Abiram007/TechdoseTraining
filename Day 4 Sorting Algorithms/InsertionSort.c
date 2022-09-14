
#include <stdio.h>

int main() 
{
  int array[] = {9, 5, 1, 4, 3};
  int size = 5;
  
  for (int step = 1; step < size; step++)
  {
    int key = array[step];
    int j = step - 1;

    while (key < array[j] && j >= 0) 
    {
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = key;
  }
  
  printf("Sorted array in ascending order:\n");
  
  for (int i = 0; i < size; i++) 
  {
    printf("%d ", array[i]);
  }
}
