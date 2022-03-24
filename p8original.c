#include<stdio.h>
struct _triangle
{
float base,altitude,area;
};
typedef struct _triangle Triangle;
int input_n()
{
  int n;
  printf("Enter the number of triangles\n");
  scanf("%d",&n);
  return n;
}
Triangle input_triangle()
{
  Triangle t;
  printf("Enter the base and altitude of the triangle\n");
  scanf("%f%f",&t.base,&t.altitude);
  return t;
}
void input_n_triangles(int n, Triangle t[n])
{
  int i;
  for(i=0;i<n;i++)
    {
      t[i]=input_triangle();
    }
}
Triangle find_area(Triangle *t)
{
  t->area=0.5*t->base*t->altitude;
  return *t;
}
void find_areas_n(int n, Triangle t[n])
{
  for(int i;i<n;i++)
    {
      find_area(&t[i]);
    }
}
Triangle find_smallest_triangle(int n, Triangle t[n])
{
  Triangle small;
small=t[0];
  for(int i=0;i<n;i++)
  if(small.area>t[i].area)
  {
    small=t[i];
  }
return small;
void output(int n, Triangle t[n], Triangle smallest)
{
  for(int i=0;i<n;i++)
    {
      printf("%f, %f and\n", t[i].base, t[i].altitude);
  }
  printf("%f, %f\nis\ntriangle with base = %f and altitude = %f 
          having area = %f\n", t[n-1].base, t[n-1].altitude, 
          smallest.base, smallest.altitude, smallest.area);
}
int main()
{
  int n;
  n=input_n();
  Triangle t[n],small;
  input_n_triangles(n, t);
  find_areas_n(n,t);
  small=find_smallest_triangle(n,t);
  output(n,t,small);
  return 0;
  }