#include<stdio.h>
int prime(int a)
{
    int i;
    for(i=2;i*i<=a;i++)
    {
        if(a%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n,i,j,a,b,c=0;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        for(j=1;j<n;j++)
        {
            if(i!=j && i*j==n && prime(j)==1)
            {
                a=i;
                b=j;
                c=1;
                break;
            }
        }
        if(c==1)
        {
            break;
        }
    }
    if(c==1)
    {
        printf("%d %d",a,b);
    }
    else
    {
        printf("-1");
    }
    return 0;
}