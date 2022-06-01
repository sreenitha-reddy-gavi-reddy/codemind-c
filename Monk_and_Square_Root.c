#include<stdio.h>
int main()
{
    int t,m,n,f;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&m);
        f=0;
        for( int i=0;i<=m;i++)
        {
            long int temp=(long int)i*i;
            if(temp%m==n)
            {
                printf("%d
",i);
                f=1;
                break;
            }
        }
        if(f==0)
        printf("-1
");
    }
    return 0;
}