#include<stdio.h>
int main()
{
    int n,r,sum=0,tem;
    scanf("%d",&n);
    tem=n;
    while(n>0)
    {
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    }
    if(tem==sum)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}