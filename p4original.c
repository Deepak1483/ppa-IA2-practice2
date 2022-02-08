#include<stdio.h>
int input_array_size()
{
   int n;
  printf("enter the number of numbers you would like to add\n");
  scanf("%d",&n);
  return n;
}
void input_array(int n,int a[n])
{
  printf("enter a number");
  for (int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
}
int sum_composite_num(int n, int a[n])
{
  int sum=0;
  for(int i=0;i<=n)  
    {
    else if(n%2!=0)
    if (n%2==0)
    sum=sum+a[i];
    i++;
    }
  return sum;
}
void output(int sum)
{
  printf("the sum of the given composite numbers is %d\n",sum);
}
int main (void)
{
  int sum;
  input_array_size();
  input_array(n,a);
  sum=sum_composite_num(n,a);
  output(sum);
}