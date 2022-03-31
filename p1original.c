#include<stdio.h>
void input(float *base,float *height)
{
  printf("Enter the base and height of the triangle\n");
  scanf("%f %f",base,height);
}
void find_area(float base,float height,float *area)
{
  *area=0.5*base*height;
}
void output(float base,float height,float area)
{
  printf("The area of triangle with base %f and height %f is %f",base,height,area);
}
int main()
{
  float a,b,x;
  input(&a,&b);
  find_area(a,b,&x);
  output(a,b,x);
  return 0;
}