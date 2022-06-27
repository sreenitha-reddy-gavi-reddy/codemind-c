#include<stdio.h>
int minimum(int *arr,int n)
{
    int i,min=arr[0],k;
    for(i=0;i<n;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    k=min;
    return k;
}
int main()
{
    int n,i,arr[100],k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    k=minimum(arr,n);
    printf("%d",k);
}