#include<stdio.h>
int main()
{
    int r,c,i,j,arr[100][100],m=0;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(j=0;j<c;j++)
    {
        m=0;
        for(i=0;i<r;i++)
        {
            if(arr[i][j]>m)
            {
                m=arr[i][j];
            }
        }
        printf("%d
",m);
    }
}