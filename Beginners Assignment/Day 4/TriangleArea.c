#include <stdio.h>
#include<math.h>

int main(void) {
  float a,b,c;
  scanf("%f%f%f",&a,&b,&c);
  float s =(a+b+c)/2;
  float z =sqrt((s)*(s-a)*(s-b)*(s-c));
  printf("%f\n",z);
  return 0;
}
