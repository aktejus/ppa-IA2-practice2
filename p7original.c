#include<stdio.h>
struct _triangle
{
float base,altitude,area;
}; 
typedef _triangle Triangle
Triangle input_triangle()
{
  Triangle a;
  printf("Enter the base and altitude of triangle\n");
  scanf("%f%f",&a.base,&a.altitude);
  return a;
}
void find_area(Triangle *t)
{
  
}