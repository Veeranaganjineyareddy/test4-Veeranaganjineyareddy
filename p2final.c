#include<stdio.h>
int input()
{
  int a;
  printf(" Enter value\n");
  scanf("%d",&a);
 return a;
}
int add(int a,int b)
{
  int c;
  c=a+b;
  return c;

}
int output(int sum)
{
  printf( "Sum is %d",sum);
}
int main()
{
  int a,b,sum;
  a=input();
  b=input();
  sum=add(a,b);
  output(sum);
  return 0;

}