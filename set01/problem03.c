#include<stdio.h>
int input()
{
    int n;
    printf("Enter n\n");
    scanf("%d",&n);
    return n;
}
int add(int a, int b)
{
    int c;
    c=a+b;
    return c;
}
void output(int a, int b, int sum)
{
    printf("The sum of %d and %d is %d",a,b,sum);
}
int main()
{
 int a,b;
 a=input();
 b=input();
 int sum;
 sum=add(a,b);
 output(a,b,sum);
 return 0;
}