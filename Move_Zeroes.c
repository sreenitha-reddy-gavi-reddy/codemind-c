#include<stdio.h>
int main()
{
    int i,n,arr[100],c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            printf("%d ",arr[i]);
        }
        else
        {
            c=c+1;
        }
    }
    for(i=0;i<c;i++)
    {
        printf("0 ");
    }
}