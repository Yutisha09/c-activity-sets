#include<stdio.h>
int input_size()
{
    int n;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    return n;
}
void input_array(int n, int a[n])
{
    int i;
    printf("Enter the no.s\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    
}
int find_largest_index(int n, int a[n])
{ 
    int i;
    int largest;
    largest=a[0];
    int index=0;
    for (i = 0; i < n; i++)
    {
         if (a[i]>largest)
        {
          largest =a[i];
          index=i;
        }
         return index;
    }
}
void output(int index)
{
    printf("The index of the largest no is %d",index);
}
int main()
{
    int n;
    n=input_size();
    int a[n];
    input_array(n,a);
    int index;
    index=find_largest_index(n,a);
    output(index);
    return 0;
}