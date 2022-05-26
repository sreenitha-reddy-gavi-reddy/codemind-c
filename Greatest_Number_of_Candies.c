#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,c;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int x;
    scanf("%d",&x);
    int max=0;
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        c=0;
        c=a[i]+x;
        if(c>=max)
        {
            printf("True ");
        }
        else
        {
            printf("False ");
        }
    }
}