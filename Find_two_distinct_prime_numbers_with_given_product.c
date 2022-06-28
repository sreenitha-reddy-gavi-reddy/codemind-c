#include<stdio.h>
int main()
{
    int n,i,c=0,q,p,k,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=2;j<n;j++)
        {
            for(k=2;k<n;k++)
            {
                if(j*k==n)
                {
                    p=j;
                    q=k;
                    c++;
                    break;
                }
            }
        }
    }
    if(c==0)
    {
        printf("-1");
    }
    else
    {
        printf("%d %d",q,p);
    }
}