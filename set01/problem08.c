#include<stdio.h>
int input_array_size()
{
    int n;
    printf("Enter the no of array /n");
    scanf("%d",&n);
    return n;
}
void input_array(int n, int a[n])
{
    int i;
    for ( i = 0; i < n; i++)
    {
        a[i]+=n;
    }
    
}
int sum_n_array(int n, int a[n])
{
    int i; int sum=0;
    for ( i = 0; i < n; i++)
    {
        sum+=a[i];
    }
    return sum;
}
void output(int n,int sum)
{
    printf("The sum of %d no. array is %d",n,sum);
}
int main()
{
    int n;
    n=input_array_size();
    int a[n];
    input_array(n,a);
    int sum=0;
    sum=sum_n_array(n,a);
    output(n,sum);
    return 0;
}