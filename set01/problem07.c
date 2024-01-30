#include<stdio.h>
int input_n()
{
    int n;
    printf("enter the no.\n");
    scanf("%d", &n);
    return n;
}
int sum_n_nos(int n)
{
    int i; 
    int sum=0;
    for ( i = 0; i < n; i++)
    {
        sum+=i;
    }
    return sum;
}
void output(int n, int sum)
{
    printf("The sum of %d no.s is %d",n,sum);
}
int main()
{
    int n;
    n=input_n();
    int sum=0;
    sum=sum_n_nos(n);
    output(n,sum);
    return 0;
}