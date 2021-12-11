45#include <stdio.h>
int input()
{
  int a;
  printf("enter any number");
  scanf("%d" , &a);
  return a;
}
int add(int a,int b)
{
  int sum ;
  sum=a+b;
  return sum;
}
int output(int sum)
{
  printf("sum of a&b is %d",sum);
}
int main()
{
  int a,b,sum;
  a=input();
  b=input();
  sum=add (a,b);
  output (sum);
  return 0;
}