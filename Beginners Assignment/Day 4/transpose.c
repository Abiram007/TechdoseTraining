#include <stdio.h>
int main() {
  int a[10][10], transpose[10][10], r, c;
  printf("Enter rows and columns: ");
  scanf("%d %d", &r, &c);

  printf("\nEnter matrix elements:\n");
  for (int i = 0; i < r; ++i){
  for (int j = 0; j < c; ++j) 
    scanf("%d", &a[i][j]);
  }
  
  printf("\nTranspose\n\n");
  for(int i=0;i<r;i++){
      for(int j=0;j<c;j++)
      printf("%d ",a[j][i]);
      printf("\n");
  }
}
