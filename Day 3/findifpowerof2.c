#include<stdio.h>
int main(){
  int x;
  scanf("%d",&x);
  printf( (x && (!(x&(x-1))))?"YES":"NO");
}
