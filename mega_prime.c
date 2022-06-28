#include<stdio.h>
int isprime(int n)
{
    int p=0,i;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            p++;
        }
    }
    return p;
}
int main()
{
    int n,rem,k,fc=0,p,i;
    scanf("%d",&n);
    p=isprime(n);
    if(p==2)
    {
        while(n!=0)
        {
            rem=n%10;
            n=n/10;
            if(rem!=0)
            {
                for(i=1;i<=rem;i++)
                {
                    if(rem%i==0)
                    {
                        fc++;
                    }
                }
                if(fc==2)
                {
                    k=1;
                }
                else
                {
                    k=0;
                }
                fc=0;
            }
        }
        if(k==1)
        {
            printf("Mega Prime");
        }
        else
        {
            printf("Not Mega Prime");
        }
    }
    else
    {
        printf("Not Mega Prime");
    }
}