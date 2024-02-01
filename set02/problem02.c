#include<stdio.h>
int input_side()
{
    int n;
    {
        printf("enter the sides of the triangle\n");
        scanf("%d",&n);
        return n;
    }
}
int check_scalene(int a, int b, int c)
{
    if (a!=b && b!=c && c!=a)
    {
        return 1;
    }
    else return 2;
}
void output(int a, int b, int c, int isscalene)
{
    if(isscalene==1)
    {
        printf("The triangle with sides %d,%d and %d is scalene",a,b,c);
    }
    else {printf("the triangle with sides %d,%d and %d is not scalene",a,b,c);}
}
int main()
{
    int a, b, c;
    a=input_side();
    b=input_side();
    c=input_side();
    int isscalene;
    isscalene=check_scalene(a,b,c);
    output(a,b,c,isscalene);
    return 0;
}