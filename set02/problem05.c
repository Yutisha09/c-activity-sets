#include<stdio.h>
int input()
{
    int n;
    printf("Enter the no. \n");
    scanf("%d",&n);
    return n;
}
int find_gcd(int a, int b)
{
    while (a!=b)
    {
        if (a>b)
        {
            a-=b;
        }
        else{
            b-=a;
        }
    }
    return a;
    
}
void output(int a, int b, int gcd)
{
    printf("The GCD of the two no.s %d and %d is %d",a,b,gcd);
}
int main()
{
    int a, b;
    a=input();
    b=input();
    int gcd;
    gcd=find_gcd(a,b);
    output(a,b,gcd);
    return 0;
}