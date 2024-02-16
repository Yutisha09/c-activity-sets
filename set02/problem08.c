#include<stdio.h>
typedef struct _triangle {
	float base, altitude, area;
} Triangle;
int input_n()
{
    int n;
    printf("Enter the no. of tringles\n");
    scanf("%d",&n);
    return n;
}

Triangle input_triangle()
{
    Triangle t;
    printf("Enter the base and altitude of the triangle\n");
    scanf("%f%f",&t.base,&t.altitude);
    return t;
}
void input_n_triangles(int n, Triangle t[n])
{
    int i;
    for ( i = 0; i <n; i++)
    {
        t[i]=input_triangle();
    }
}
void find_area(Triangle *t)
{
    t->area=0.5*t->base*t->altitude;
}
void find_n_areas(int n, Triangle t[n])
{
    int i;
    for ( i = 0; i < n; i++)
    {
        find_area(&t[i]);
    }
    
}
Triangle find_smallest_triangle(int n, Triangle t[n])
{
    Triangle smallest=t[0];
    for (int i = 0; i < n; i++)
    {
        if (t[i].area< smallest.area)
        {
            smallest=t[i];
        }
    }
    return smallest;
}
void output(int n, Triangle t[n], Triangle smallest)
{
    printf("the smallest of given %d triangles",n);
    for ( int i = 0; i < n; i++)
    {
        printf("with base %f and altitude %f",t[i].base,t[i].altitude);
    }
    printf("is %f",smallest.area);
}
int main()
{
    int n;
    n=input_n();
    Triangle t[n];
    input_n_triangles(n,t);
    find_n_areas(n,t);
    Triangle smallest;
    smallest=find_smallest_triangle(n,t);
    output(n,t,smallest);
    return 0;
}