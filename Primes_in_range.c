#include<stdio.h>
#include<math.h>
int main()
{
    int m,n,i,j,count=0,c=0;
    scanf("%d%d",&m,&n);
    if(m==1)
    m=2;
    for(i=m;i<=n;i++)
    {
        count=0;
        for(j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            count++;
        }
        if(count==0)
        c++;
    }
    printf("%d",c);
    return 0;
}