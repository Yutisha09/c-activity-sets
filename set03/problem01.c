#include<stdio.h>
#include<math.h>
void input(float *x1, float *y1, float *x2, float *y2)
{
    printf("Enter the x axis of 1st point\n");
    scanf("%f",x1);   
    printf("Enter the y axis of 1st point\n");
    scanf("%f",y1);
    printf("Enter the x axis of 2nd point\n");
    scanf("%f",x2);
    printf("Enter the y axis of 2nd point\n");
    scanf("%f",y2);
}
float find_distance(float x1, float y1, float x2, float y2)
{
    float distance;
    float a,b,c;
    a=(x2-x1);
    b=(y2-y1);
    c=((a*a)+(b*b));
    distance=sqrt(c);
    return distance;
}
void output(float x1, float y1, float x2, float y2, float distance)
{
    printf("the distance of 2 points is %f",distance);
}
int main()
{
    float x1,x2,y1,y2;
    input(&x1,&y1,&x2,&y2);
    float distance;
    distance=find_distance(x1,y1,x2,y2);
    output(x1,y1,x2,y2,distance);
    return 0;
}