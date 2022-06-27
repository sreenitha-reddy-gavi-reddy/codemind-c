#include<stdio.h>
int main()
{
    int n,i,arr[100],k,m,p=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&k,&m);
    for(i=0;i<n;i++)
    {
        if(arr[i]>=k && arr[i]<=m)
        {
            printf("%d ",arr[i]);
            p=1;
        }
    }
    if(p==0)
    {
        printf("-1");
    }
}