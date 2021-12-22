#include <stdio.h>
int input();
int add(int a, int b, int *sum);1
void output(int a,int b,int sum);

int main()
{
  int rslt,a,b,res;
  a=input();
  b = input();  
  res = add(a,b, &rslt);
  output(a,b,res);
  return 0;
}
int input()
{
  int x;
  printf("enter the value\n");
  scanf("%d",&x);
  return x;
}

int add(int a, int b, int *sum)
{
  *sum=a+b;
  return *sum;
}
void output(int a,int b,int sum)
{
  printf("The answer = %d", sum);
}
