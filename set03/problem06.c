#include<stdio.h>
void input_string(char* a, char* b)
{
    printf("Enter the word\n");
    scanf("%s",a);
    printf("Enter the word to find the index\n");
    scanf("%s",b);
}
int sub_str_index(char* a, char* b)
{
    int i=0;
    int j=0;
    for ( i = 0;a[i]!='\0'; i++ )
    {
        if (a[i]==b[j])
        {
            int k=i;
             for ( j=0; b[j]!='\0' && b[j]==a[k];j++,k++)
             {
                return i;
             }
             break;
        }
}
}
void output(char *a, char *b, int index)
{
    printf("the index value of %s is %d",b,index);
}
int main()
{
    char a[100],b[100];
    input_string(a,b);
    int index;
    index=sub_str_index(a,b);
    output(a,b,index);
    return 0;
}