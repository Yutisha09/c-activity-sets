#include<stdio.h>
void input_two_strings(char *str1, char *str2)
{
    printf("enter the 1st string\n");
    scanf("%s",str1);
    printf("enter the 2nd string\n");
    scanf("%s",str2);
}
int stringcompare(char *str1, char *str2)
{
    int i;
    for (i=0; str1[i]!='\0' && str2[i]!='\0' && str1[i]==str2[i]; i++);
    if (str1[i]>str2[i])
    {
        return 0;
    }
     else if (str2[i]>str1[i])
    {
        return 1;
    }
    return 2;
}

void output(char *str1, char *str2, int result)
{
    if(result==0)
    {
        printf("%s is greater than %s\n",str1,str2);
    }
     else if(result==1)
    {
        printf("%s is greater than %s\n",str2,str1);
    }
    else
    {
        printf("%s is equall to %s\n",str1,str2);
    }
}
int main()
{
    char str1[100];
    char str2[100];
    input_two_strings(str1,str2);
    int result;
    result=stringcompare(str1,str2);
    output(str1,str2,result);
    return 0;
}