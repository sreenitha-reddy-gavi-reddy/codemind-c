#include<stdio.h>
int maximum(int *arr,int n)
{
    int i,max=arr[0],k;
    for(i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    k=max;
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
    k=maximum(arr,n);
    printf("%d",k);
}