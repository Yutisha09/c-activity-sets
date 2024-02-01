#include<stdio.h>
void input(float *base, float *height)
{
    printf("Enter the base \n");
    scanf("%f",base);
    printf("Enter the height \n");
    scanf("%f",height);
}
void find_area(float base , float height, float *area)
{
    *area=0.5*base*height;
}
void output(float base, float height, float area)
{
    printf("The area of a triangle with base %f and height %f is %f",base,height,area);
}
int main()
{
    float height, base;
    input(&base,&height);
    float area;
    find_area(base,height,&area);
    output(base,height,area);
    return 0;
}