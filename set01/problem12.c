#include<stdio.h>
struct _complex
{
    float real;
    float imaginary;
};

typedef struct _complex Complex;

int get_n()
{
    int n;
    printf("enter the no.of complexes\n");
    scanf("%d",&n);
    return n;
}

Complex input_complex()
{
    Complex c;
    printf("Enter the real part of the no.\n");
    scanf("%f",&c.real);
    printf("Enter the imaginary part of the no.\n");
    scanf("%f",&c.imaginary);
    return c;
}
void input_n_complex(int n, Complex c[n])
{
    for (int i = 0; i < n; i++)
    {
        c[i]=input_complex();
    }
    
}
Complex add( Complex a, Complex b)
{
    Complex sum;
    sum.real=a.real+b.real;
    sum.imaginary=a.imaginary+b.imaginary;
    return sum;
}
Complex average_n_complex(int n,Complex c[n])
{
    Complex avg;
    Complex sum={0,0};
    int i;
    for ( i = 0; i < n; i++)
    {
        sum=add(c[i],sum);
    }
    
    avg.real=sum.real/n;
    avg.imaginary=sum.imaginary/n;
    return avg;
}
void output( int n,Complex c[n] ,Complex result)
{
    int i;
    printf("the avg of %d no.s",n);
    for ( i = 0; i < n; i++)
    printf("%.2f+%.2fi",c[i].real,c[i].imaginary);
    {
        if (i<n-1)
        {
            printf("+ ");
        }
        else 
        {
            printf("= ");
        }
        
    }
    printf("%.2f+%.2fi",result.real,result.imaginary);
    
}
int main()
{
    int n;
    n=get_n();
    Complex c[n];
    input_n_complex(n,c);
    Complex result;
    result=average_n_complex(n,c);
    output(n,c,result);
    return 0;
}