#include<stdio.h>
int prime(int n)
{
    if(n==1)
    {
        return 0;
    }
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int n,c=0;
    scanf("%d",&n);
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            if(prime(i))
            {
                c++;
            }
        }
    }
    printf("%d",c+2);
}