#include<stdio.h>
int main()
{
    int n,rem,lar=0;
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        if(lar<rem)
        {
            lar=rem;
        }
        n=n/10;
    }
    printf("%d",lar);
}