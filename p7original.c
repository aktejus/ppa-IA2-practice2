#include<stdio.h>
#include<math.h>
struct _triangle
{
float base,altitude,area;
};
typedef struct _triangle Triangle;
Triangle input_triangle()
{
  Triangle a;
  printf("Enter the base and altitude of triangle\n");
  scanf("%f%f",&a.base,&a.altitude);
  return a;
}
void find_area(Triangle *t)
{
  t->area=0.5*t->base*t->altitude;
}
void output(Triangle t)
{
  printf("The area of the triangle with base %f and altitude %f is %f",t.base,t.altitude,t.area);
}
int main()
{
  Triangle x;
  x=input_triangle();
  find_area(&x);
  output(x);
  return 0;
}