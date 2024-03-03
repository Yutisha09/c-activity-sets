#include <stdio.h>
void input(int *num1, int *den1, int *num2, int *den2)
{
    printf("Enter the num of the 1st\n");
    scanf("%d", num1);
    printf("Enter the den of the 1st\n");
    scanf("%d", den1);
    printf("Enter the num of the 2nd\n");
    scanf("%d", num2);
    printf("Enter the den2 of the 2nd\n");
    scanf("%d", den2);
}
int find_gcd(int a, int b)
{
    while (a!=b)
    {
        if (a>b)
        {
            a-=b;
        }
        else
        {
            b-=a;
        }
        return a;
    }
    
}
void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den)
{ 
    *res_num=((num1*den2)+(num2*den1));                                          
    *res_den=(den1*den2);
    
    int gcd=find_gcd(*res_den,*res_num);
    *res_den/=gcd;
    *res_num/=gcd;
   
   
}
void output(int num1, int den1, int num2, int den2, int res_num, int res_den)
{
    printf("the sum of %d/%d and %d/%d is %d/%d\n",num1,den1,num2,den2,res_num,res_den);
}
int main()
{
    int a,b,c,d;
    int e,f;
    input(&a,&b,&c,&d);
    add(a,b,c,d,&e,&f);
    output(a,b,c,d,e,f);
    return 0;
}