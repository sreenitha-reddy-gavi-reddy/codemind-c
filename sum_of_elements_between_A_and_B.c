#include<stdio.h>
int main()
{
    int n,i,arr[100],sum=0,k,m;
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
            sum=sum+arr[i];
        }
    }
    printf("%d",sum);
}