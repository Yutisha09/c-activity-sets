#include<stdio.h>
typedef struct{
	float base, altitude, area;
} Triangle;

Triangle input_triangle()
{ 
    Triangle t;
    printf("enter the base and altitude of the triangle \n");
    scanf("%f %f",&t.base,&t.altitude);
    return t;
}
void find_area(Triangle *t)
{
    t->area=0.5*t->base*t->altitude;
}

void output(Triangle t)
{
    printf("the area of the triangle with base %.2f and altitude %.2f is %.2f",t.base,t.altitude,t.area);
}
int main()
{
    Triangle t=input_triangle();
    find_area(&t);
    output(t);
    return 0;
}