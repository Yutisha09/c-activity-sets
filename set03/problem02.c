#include<stdio.h>
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
  printf("Enter the x axis of the 1st point\n");
  scanf("%f",x1);
  printf("Enter the y axis of the 1st point\n");
  scanf("%f",y1);
  printf("Enter the x axis of the 2nd point\n");
  scanf("%f",x2);
  printf("Enter the y axis of the 2nd point\n");
  scanf("%f",y2);
  printf("Enter the x axis of the 3rd point\n");
  scanf("%f",x3);
  printf("Enter the y axis of the 3rd point\n");
  scanf("%f",y3);

}
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
  float area= 0.5*(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
  if (area<=0)
  {
    return 0;
  }
  else
  {
    return 1;
  }
  
}
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result)
{ if (result == 1)
    {
  printf("The given points %f and %f , %f and %f and %f and %f makes a triangle",x1,y1,x2,y2,x3,y3);
    }
    else 
    {
     printf("The given points %f and %f , %f and %f and %f and %f does not make a triangle",x1,y1,x2,y2,x3,y3);   
    }
}
int main()
{
  float x1,y1,x2,y2,x3,y3;
  input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
  float result=is_triangle(x1,y1,x2,y2,x3,y3);
  output(x1,y1,x2,y2,x3,y3,result);
  return 0;

}