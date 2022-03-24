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
  int t;
  printf("Enter the base and altitude of the triangle\n");
  scanf("%d%d",&t.base,&t.altitude);
  return t;
}
void input_n_triangles(int n, triangle t[n]
{
  int i;
  for(i=0;i<n;i--)
}