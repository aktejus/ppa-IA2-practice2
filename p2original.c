#include<stdio.h>
int input_side()
{
  int n;
  printf("Enter the side of the triangle\n");
  scanf("%d",&n);
  return n;
}
int check_scalene(int a,int b,int c,int *isscalene)
{
  if((a!=b) && (b!=c) && (c!=a))
    *isscalene=1;
  else
    *isscalene=-1;
}
void output(int a,int b,int c,int isscalene)
{
  if(isscalene==1)
    printf("The triangle with sides %d,%d,%d is scalene",a,b,c);
  else 
    if(isscalene==-1)
    printf("The triangle with sides %d,%d,%d is not scalene",a,b,c);
}
int main()
{
  int a,b,c,scal;
  a=input_side();
  b=input_side();
  c=input_side();
  check_scalene(a,b,c,&scal);
  output(a,b,c,scal);
  return 0;  
}