#include<stdio.h>
void input(int *a, int *b)
{
    printf("Enter the no \n");
    scanf("%d",a);
    printf("Enter the no \n");
    scanf("%d",b);
}
void add(int a, int b, int *sum)
{
    *sum=a+b;
}
void output(int a, int b, int sum)
{
    printf("the sum of %d and %d is %d\n",a,b,sum);
}
int main()
{
    int a, b;
    input(&a,&b);
    int result=0;
    add(a,b,&result);
    output(a,b,result);
    return 0;
}