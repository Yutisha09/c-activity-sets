#include<stdio.h>
typedef struct {
    int num, den;
} Fraction;

Fraction input()
{
    Fraction a;
    printf("Enter the numerator\n");
    scanf("%d",&a.num);
    printf("Enter the denominator\n");
    scanf("%d",&a.den);
    return a;

}
int find_smallest(Fraction a, Fraction b, Fraction c)
{
    float x=(float)(a.num/a.den);
    float y=(float)(b.num/b.den);
    float z=(float)(c.num/c.den);

    if (x<=y && x<=z)
    {
        return 1;
    }
    else if (y<=z)
    {
        return 2;
    }
    else
    {
        return 3;
    }

}
void output(Fraction a ,Fraction b , Fraction c, int result)
{
    if (result==1)
    {
        printf("The smallest of the 3 %d/%d , %d/%d and %d/%d is %d/%d ",a.num,a.den,b.num,b.den,c.num,c.den,a.num,a.den);
    }
    else if (result==2)
    {
        printf("The smallest of the 3 %d/%d , %d/%d and %d/%d is %d/%d ",a.num,a.den,b.num,b.den,c.num,c.den,b.num,b.den);
    }
    else
    {
        printf("The smallest of the 3 %d/%d , %d/%d and %d/%d is %d/%d ",a.num,a.den,b.num,b.den,c.num,c.den,c.num,c.den);
    }
    
}
int main()
{
    Fraction a,b,c;
    a=input();
    b=input();
    c=input();
    int result=find_smallest(a,b,c);
    output(a,b,c,result);
    return 0;   
}