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
}
void input_n_triangles(int n, Triangle t[n])
{
  int i;
  for(i=0;i<n;i--)
    {
      t[n]=input_triangle();
    }
}
void find_area(Triangle *t)
{
  t->area=0.5*t->base*t->altitude;
}
void find_areas_n(int n, Triangle t[n])
{
  
}