#include<stdio.h>
int main()
{
    int n,a[100],i,k,j,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=i;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
        }
        if(c>n/2)
        {
            printf("%d ",a[i]);
            break;
        }
    }
}