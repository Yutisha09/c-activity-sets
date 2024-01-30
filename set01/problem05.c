#include<stdio.h>
int input()
{
    int n;
    printf("Enter the no.\n");
    scanf("%d",&n);
    return n;
}
int compare(int a, int b, int c)
{
    int largest;
    if (a>b && a>c)
    {
      return a;
    }
    else if (b>a && b>c)
    {
        return b;
    }
    else return c;
}
void output(int a, int b, int c, int largest)
{
    printf("The largest of %d , %dand %d is %d \n",a,b,c, largest);
}
int main()
{
    int a, b, c ;
    a=input();
    b=input();
    c=input();
    int largest;
    largest=compare(a,b,c);
    output(a,b,c,largest);
    return 0;
}