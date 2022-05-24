#include<stdio.h>
int main()
{
    int i,j,rows,col,a[10][10],sum;
    scanf("%d",&i);
    for(rows=0;rows<i;rows++)
    {
        for(col=0;col<2;col++)
        {
            scanf("%d",&a[rows][col]);
        }
    }
    for(rows=0;rows<i;rows++)
    {
        sum=0;
        for(col=0;col<2;col++)
        {
            sum=sum+a[rows][col];
        }
        printf("%d
",sum);
    }
    return 0;
}