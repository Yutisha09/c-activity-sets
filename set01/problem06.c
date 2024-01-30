#include <stdio.h>

void input(int *a, int *b, int *c)
{
    printf("Enter the first number: ");
    scanf("%d", a);
    printf("Enter the second number: ");
    scanf("%d", b);
    printf("Enter the third number: ");
    scanf("%d", c);
}

void compare(int a, int b, int c, int *largest)
{
    if (a >= b && a >= c)
    {
        *largest = a;
    }
    else if (b >= a && b >= c)
    {
        *largest = b;
    }
    else
    {
        *largest = c;
    }
}

void output(int a, int b, int c, int largest)
{
    printf("The largest of %d, %d, and %d is %d\n", a, b, c, largest);
}

int main()
{
    int a, b, c;
    input(&a, &b, &c);
    int largest = 0;
    compare(a, b, c, &largest);
    output(a, b, c, largest);
    return 0;
}
