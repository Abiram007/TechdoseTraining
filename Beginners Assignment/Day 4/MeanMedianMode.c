include <stdio.h>

int main() {
  int n;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++)
    {
      scanf("%d",arr+i);
    }
 
  int mean=0;
  for(int i=0;i<n;i++)
    {
      mean+=arr[i];
    }
  printf("%d\n",mean/n);
  
  if(n%2!=0)
  {
      printf("%d\n",(n+1)/2);
  }
  else
  {
    printf("%.2f\n",((n)/2+((n/2)+1))/2.0);
  }
  
  int maxcount=0,count=0,maxval=0;
  for(int i=0;i<n;i++){
    count=0;
    for(int j=0;j<n;j++)
      {
         if(arr[i]==arr[j])
         {
           count++;
         }
      }
  if(count>maxcount)
  {
    maxcount=count;
    maxval=arr[i];
  }
  }
  printf("Mode:%d",maxval);
  return 0;
}
