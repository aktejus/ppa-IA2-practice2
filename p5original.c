#include<stdio.h>
int input()
{
  int a,b;
  printf("Enter the two numbers\n");
  scanf("%d %d",&a,&b);
}
int gcd(int a,int b)
{
  int i,gcd;
  for(i=1; i<=a && i<=b;i++)
    {
        // Checks if i is factor of both integers
        if(a%i==0 && b%i==0)
            gcd = i;
}
  void output(int a,int b,int gcd)
  {
    printf("The gcd of %d and %d is %d",a,b,gcd);
  }
  int main()
  {
    int a, b, gcd;
    input(a,b);
    gcd(a,b);
    output(a,b,gcd);
    return 0;
  }