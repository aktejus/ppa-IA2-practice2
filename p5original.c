#include<stdio.h>
int input()
{
  int x;
  printf("Enter the numbers\n");
  scanf("%d",&x);
  return x;
}
int gcd(int a,int b)
{
  int g;
  for(int i=1; i<=a && i<=b;i++)
    {
      if(a%i==0 && b%i==0)
        g=i;
    }
  return g;
}
  void output(int a,int b,int gcd)
  {
    printf("The gcd of %d and %d is %d",a,b,gcd);
  }
  int main()
  {
    int a,b,c;
    a=input();
    b=input();
    c=gcd(a,b);
    output(a,b,c);
    return 0;
  }