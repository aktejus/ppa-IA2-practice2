#include<stdio.h>
int main()
{
  int n;
  printf("Enter the number\n");
  scanf("%d",&n);
  if(n<0)
    printf("The given number is negative");
  else
    printf("The given number is positive");
  return 0;
}