#include<stdio.h>
int main()
{
    int a[10][20],r,c,s=0,i,j;
    scanf("%d",&r);
    scanf("%d",&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            s=s+a[i][j];
        }
    }
    printf("%d",s);
    return 0;
}