#include<stdio.h>
int main()
{
    int m,n,sum=0,product=1;
    scanf("%d",&n);
    while(n>0)
    {
        m=n%10;
        sum=sum+m;
        product=product*m;
        n=n/10;
    }
    if(sum==product)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}