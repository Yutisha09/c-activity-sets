#include<stdio.h>
int input()
{
    int n;
    printf("enter the no.\n");
    scanf("%d",&n);
    return n;
}
int find_fibo(int n,int a[n])
{
    int i;
    int j;
    int fibo=0;
    for ( i = 0;i<n;i++)
    {   
        fibo=a[i]++;

    }
    return fibo;
    
}
void output(int n, int fibo)
{
    printf("the %d no. of the fibannaci series is %d",n,fibo);
}
int main()
{
    int n;
    n=input();
    int a[n];
    int fibo=0;
    fibo=find_fibo(n,a);
    output(n,fibo);
    return 0;
}
