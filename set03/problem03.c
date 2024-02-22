#include<stdio.h>
int input_number()
{
    int n;
    printf("Enter the no. \n");
    scanf("%d",&n);
    return n;
}
int is_prime(int n)
{
    int i;
    for ( i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            return 2;
        }
        else 
        {
            return 1;
        }
        
    }
    
}
void output(int n, int result)
{
    if (result==2)
    {
        printf("the given no. %d is not prime",n);
    }
    else 
    {
        printf("the hgiven no. %d is a prime no.",n);
    }
}
int main()
{
    int n;
    n=input_number();
    int result;
    result=is_prime(n);
    output(n,result);
    return 0;
}