#include<stdio.h>
int main()
{
  int r;
  float area;
  printf("Enter the radius of the circle\n");
  scanf("%d",&r);
  area=3.142*r*r;
  printf("The area of the circle with radius %d is %f\n",r,area);
  return 0;
}