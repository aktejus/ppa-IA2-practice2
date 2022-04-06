#include<stdio.h>
int main()
{
  int r;
  float area;
  printf("Enter the radius of sphere;\n");
  scanf("%d",&r);
  area=4*3.1428*r*r;
  printf("The area of the sphere of radius %d is %f",r,area);
  return 0;
}