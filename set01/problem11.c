#include<stdio.h>



struct _complex {
    float real;
    float imaginary;
};

typedef struct _complex Complex;

Complex input() {
    Complex c;
    printf("Enter real and imaginary part respectively:\n");
    scanf("%f %f", &c.real, &c.imaginary);
    return c;
}

Complex find_sum(Complex a, Complex b) {
    Complex sum;
    sum.real = a.real + b.real;
    sum.imaginary = a.imaginary + b.imaginary;
    return sum;
}

void output(Complex a, Complex b, Complex sum) {
    printf("The sum of %.1f + %.1fi and %.1f + %.1fi is %.1f + %.1fi\n", a.real, a.imaginary, b.real, b.imaginary, sum.real, sum.imaginary);
}

int main() { 
    Complex n1, n2, result;
    n1 = input();
    n2 = input();

    result = find_sum(n1, n2);

    output(n1, n2, result);

    return 0;
}
