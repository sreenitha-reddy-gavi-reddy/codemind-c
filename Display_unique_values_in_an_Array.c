#include<stdio.h>
int main()
{
    int n,i,j,arr[100],m=0,c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j] && i!=j)
            {
                c=c+1;
            }
        }
        if(c==0)
        {
            m=m+1;
            printf("%d ",arr[i]);
        }
    }
    if(m==0)
    {
        printf("-1");
    }
}