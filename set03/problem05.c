#include<stdio.h>
int input_array_size()
{
    int n;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    return n;
}
void init_array(int n, int a[n])
{
    int i;
    for ( i=0; i<=n ; i++)
    {
        a[i]=i;
    }
    
}
void erotosthenes_sieve(int n, int a[n])
{
    int i;
    int j;

    for ( i = 2; i < n; i++)
    {
        for ( j = 2; j < n ; j++)
        {
            if (a[i*j]<n)
            {
                a[i*j]=0;
            }
            else
            {
                break ;
            }    
        }
        
    }
    

}
void output(int n, int a[n])
{
int i;
    printf("the prime no.s till %d is",n);
    for ( i = 2; i < n; i++)
    {
        if (a[i]!=0)
        {
             printf("\n %d\n",a[i]);
        }
    }
  }

int main()
{
    int n;
    n=input_array_size();
    int a[n];
    init_array(n,a);
    erotosthenes_sieve(n,a);
    output(n,a);
    return 0;
}