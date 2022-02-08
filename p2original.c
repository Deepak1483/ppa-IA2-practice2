#include<stdio.h>
int input_side()
{
  int s;
  printf("enter the sides of the triangle\n");
  scanf("%d",&s);
 return s;
}
int check_scalene(int a ,int b, int c)
{
  int isscalene;
  if(a!=b||b!=c||c!=a)
  {
  return isscalene=1;  
  }
  else if(a==b||b==c||a==c)
  {
  return isscalene=0;  
  }
}
void output(int isscalene)
{
      if (isscalene==1)
      {
        printf("the given triangle is scalene\n");
      }
      else if(isscalene==0)
      {
        printf("the given triangle is not a scalene\n");
      }
      else{
        printf("error");
      }
}
int main()
{
  int a,b,c,isscalene;
  a=input_side();
  b=input_side();
  c=input_side();
  isscalene=check_scalene(a,b,c);
  output(isscalene);
  return 0;
}