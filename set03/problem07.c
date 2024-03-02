#include<stdio.h>
#include<math.h>
typedef struct point {
    float x, y;
} Point;

typedef struct line {
    Point p1, p2;
    float distance;
} Line;

Point input_point()
{
    Point p;
    printf("Enter the x and y axis\n");
    scanf("%f%f",&p.x,&p.y);
    return p;
}
Line input_line()
{ 
    Line l;
    l.p1=input_point();
    l.p2=input_point();
    return l;
    
}
void find_length(Line *l)
{
    float x;
    float length;
    x=((l->p2.x-l->p1.x)*(l->p2.x-l->p1.x)+(l->p2.y-l->p1.y)*(l->p2.y-l->p1.y));
    l->distance=sqrt(x);

}
void output(Line l)
{
    printf("the length of the give 2 points %f, %f and %f,%f is %f",l.p1.x,l.p1.y,l.p2.x,l.p2.y,l.distance);

}
int main()
{
    Line l;
    l=input_line();
    find_length(&l);
    output(l);
    return 0;
}
