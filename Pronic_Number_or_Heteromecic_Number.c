#include<stdio.h>
int main()
{
    int n,i,k=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i*(i+1)==n)
        {
            k=1;
            break;
        }
    }
    if(k==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}