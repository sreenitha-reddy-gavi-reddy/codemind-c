#include<stdio.h>
int main()
{
    int i,j,row,col,a[10][10],s;
    scanf("%d%d",&i,&j);
    for(row=0;row<i;row++)
    {
        for(col=0;col<j;col++)
        {
            scanf("%d",&a[row][col]);
        }
    }
    for(row=0;row<i;row++)
    {
        s=0;
        for(col=0;col<j;col++)
        {
            s=s+a[row][col];
        }
        printf("%d ",s);
    }
    return 0;
}