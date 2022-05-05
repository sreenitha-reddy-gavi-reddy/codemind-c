#include<stdio.h>
int main()
{
    int t,m,n,sum=0;
    scanf("%d",&t);
    while(t>0)
    {
        scanf("%d%d",&m,&n);
        sum=m+n;
        printf("%d
",sum);
        t--;
    }
}