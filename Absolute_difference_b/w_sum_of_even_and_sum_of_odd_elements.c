#include<stdio.h>
#include<math.h>
int main()
{
    int n,arr[100],i,os=0,es=0,diff=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            es+=arr[i];
        }
        if(arr[i]%2==1)
        {
            os+=arr[i];
        }
    }
    diff=abs(es-os);
    printf("%d",diff);
}