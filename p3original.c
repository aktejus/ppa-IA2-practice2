#include<stdio.h>
int input_number()
{
  int a;
  printf("Enter a number\n");
  scanf("%d",&a);
  return a;
}
int is_composite(int n)
{
  int i,c=0;
  for(i=2;i<n;i++)
    {
      if(n%i==0)
        c++;
    }
  return c;
}
void output(int n,int composite)
{
  if(composite==0)
    printf("%d is a prime number\n",n);
  else 
    printf("%d is composite number\n",n);
}
int main()
{
  int a,c;
  a=input_number();
  c=is_composite(a);
  output(a,c);
  return 0;
}
