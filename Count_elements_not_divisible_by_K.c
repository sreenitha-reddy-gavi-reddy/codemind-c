#include<stdio.h>
int main()
{
    int n,arr[100],c=0,k,i;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%k!=0)
        {
            c++;
        }
    }
    printf("%d",c);
}