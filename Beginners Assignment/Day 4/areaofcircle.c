#include<stdio.h>

#define PI 3.14

int main()
{
  float radius, area;

  printf("\n Please Enter the radius of a circle\n");
  scanf("%f",&radius);
  area = PI*radius*radius; 
  printf("\n Area Of a Circle = %.2f\n", area);
  return 0;
}
