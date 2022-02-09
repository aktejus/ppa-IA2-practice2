#include<stdio.h>
void input(float *base,float *height)
{
  printf("Enter the base and height of the triangle:\n");
  scanf("%f %f",base,height);
}
void find_area(float base,float height,float *area)
{
  *area=0.5*base*height;
}
void output(float base,float height,float area)
{
  printf("The area of the triangle is %f\n",area);
}
int main()
{
  float a,b,area;
  input(&a,&b);
  find_area(a,b,&area);
  output(a,b,area);
  return 0;
}