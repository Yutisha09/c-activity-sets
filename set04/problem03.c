#include<stdio.h>
void input_n_and_r(int *n, int *r)
{
    printf("Enter n\n");
    scanf("%d",n);
    printf("Enter r\n");
    scanf("%d",r);
}
int nCr(int n, int r)
{
    int i;
    int x=1;
    for ( i = 1; i<=n; i++)
    {
        x*=i;
    }
    int j;
    int y=1;
    for ( j = 1; j<=r; j++)
    {
        y*=j;
    }
    int k;
    int z=1;
        for ( k = 1; k<=(n-r); k++)
    {
        z*=k;
    }

    int result;
    result=x/(y*z);
    return result;

}
void output(int n, int r, int result)
{
    printf("For n=%d and r=%d nCr is %d",n,r,result);
}
int main()
{
    int n;
    int r;
    input_n_and_r(&n,&r);
    int result;
    result=nCr(n,r);
    output(n,r,result);
    return 0;
}