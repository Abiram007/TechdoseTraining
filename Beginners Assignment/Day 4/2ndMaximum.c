#include <stdio.h>
int secondmaxn(int n,int arr[])
{
  int max= arr[0]>arr[1]?arr[0]:arr[1];
  int secmax = arr[0]<arr[1]?arr[0]:arr[1];
  for(int i=2;i<n;i++)
    {
      if(arr[i]>max)
      {
        secmax=max;
        max=arr[i];
      }
      else if(arr[i]>secmax)
      {
        secmax=arr[i];
      }
    }
  return secmax;
}
int main(void) {
  int n;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
   printf("%d",secondmaxn(n,arr));
  return 0;
}
