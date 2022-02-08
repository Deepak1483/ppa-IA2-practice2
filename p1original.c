#include<stdio.h>
void input(float *base, float *height)
{
  printf("enter the base of the triangle\n");
  scanf("%f",base);
    printf("enter the height of the triangle\n");
scanf("%f",height);
}
void find_area(float base, float height, float *area)
{
  *area=0.5*base*height;
}
void output(float area)
{
  printf("the area of the triangle is %f\n",area);
}
void main()
{
  float base,height,area;
  input(&base,&height);
  find_area(base,height,&area);
  output(area);
}