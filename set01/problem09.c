#include<stdio.h>
float input()
{
    float n;
    printf("Enter the no. \n");
    scanf("%f",&n);
    return n;
}
float square_root(float n)
{
    float a, b;
    a=n/2;
    b=0.0001;
    while ((a*a-n)>b)
    {
      a=(a+n/a)/2; 
    }
    return a;
    
}
void output(float n, float sqrroot)
{
    printf("The sqrroot of %f is %f",n,sqrroot);
}
int main()
{
 float n;
 n=input();
 float sqrroot;
 sqrroot=square_root(n);
 output(n,sqrroot);
 return 0;
}