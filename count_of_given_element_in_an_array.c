#include<stdio.h>
int main()
{
    int n,arr[100],i,k=0,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&t);
    for(i=0;i<n;i++)
    {
        if(arr[i]==t)
        {
            k++;
        }
    }
    printf("%d",k);
}