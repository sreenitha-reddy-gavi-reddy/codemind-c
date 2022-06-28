#include<stdio.h>
int main()
{
    int n,arr[100],k,i,s;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=0;i<=k-1;i++)
    {
        s=s+arr[i];
    }
    printf("%d",s);
}