#include<stdio.h>
int main()
{
    int n,i,arr[100],c=0,dc=0,t,d;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        dc=0;
        while(arr[i]!=0)
        {
            d=arr[i]%10;
            arr[i]=arr[i]/10;
            dc++;
        }
        if(dc%2==0)
        {
            c++;
        }
    }
    printf("%d",c);
}