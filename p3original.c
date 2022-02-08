#include<stdio.h>
int input_number()
{
  int n ;
  printf("enter any number\n");
  scanf("%d",&n);
  return n;
}
int is_composite(int n)
{
  int comp=0;
  for(int i=1;i<=n;i++)
  {
    if(n%i==0)
    comp++;
  }
  return comp;
}
void output(int n, int comp)
{
  if (comp>2)
  printf("the given number is  composite\n");
  else
  printf("the given number is not composite\n");
}
int main(void)
{
  int n,comp;
  n=input_number();
  comp=is_composite(n);
  output(n,comp);
}