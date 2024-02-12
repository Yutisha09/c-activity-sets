#include<stdio.h>
void input_string(char *a)
{
    printf("enter the string \n");
    scanf("%s",a);
}
void str_reverse(char *str, char *rev_str)
{
    int l,i;
    for(l=0;str[l]!='\0';l++);
    l-=1;
    for(i=0;l>=0;l--,i++)
    {
        rev_str[i]=str[l];
    }
    rev_str[i]='\0';
}
void output(char *a, char *reverse_a)
{
    printf("The reverse of the string %s is %s \n",a,reverse_a);
}
int main()
{
    char a[100],b[100];
    input_string(a);
    str_reverse(a,b);
    output(a,b);
    return 0;
}
