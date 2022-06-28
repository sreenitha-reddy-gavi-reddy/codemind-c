#include<stdio.h>
int main()
{
    int n,m,add=0,sum=0,i;
    scanf("%d%d",&n,&m);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    for(i=1;i<m;i++)
    {
        if(m%i==0)
        {
            add=add+i;
        }
    }
    if(sum==m && add==n)
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
}