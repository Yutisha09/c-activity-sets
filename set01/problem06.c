#include<stdio.h>
int input(int *a, int *b, int *c)
{
    printf("Enter the no \n");
    scanf("%d",&a);
    printf("Enter the no \n");
    scanf("%d",&b);
    printf("Enter the no \n");
    scanf("%d",&c);
}
void compare(int a, int b, int c, int *largest)
{
    if (a>=b && a>=c)
    {
        *largest=a;
    }
    else if(b>=a && b>=c)
    {
        *largest=b;
    }
    else *largest=c;
    
}
void output(int a, int b, int c, int largest)
{
    if (largest=a)
    {
        printf("The largest of %d %d and %d is %d",a,b,c,largest);
    }
    else if (largest=b)
    {
        printf("The largest of %d %d and %d is %d",a,b,c,largest);
    }
    else 
    {
        printf("The largest of %d %d and %d is %d",a,b,c,largest);
    }
}
int main()
{
    int a, b, c;
    input(a,b,c);
    int largest;
    compare(a,b,c,largest);
    output(a,b,c,largest);
    return 0;
}