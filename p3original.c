#include<stdio.h>
int input_number()
{
  int x;
  printf("Enter a number\n");
  scanf("%d",&x);
  return x;
}
int is_composite(int n)
{
  int num;
  int i;
  int count=0;
  for(i=0;i<=n;i++)
  {
    if(num %i==0)
    count++;
  }
  if(count>2) 
  return n=1;
  else
  return n=-1;
}
void output(int n,int composite)
{
  if(n==1)
  printf("The number is a composite number");
  else 
  if(n==-1)
  printf("The number is not a composite number");
}
int main()
{
  int n,composite;
  n=input_number();
  is_composite(n);
  output(n,composite);
  return 0;
}