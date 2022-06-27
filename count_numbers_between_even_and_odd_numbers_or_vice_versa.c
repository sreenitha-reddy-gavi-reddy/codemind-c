#include<stdio.h>
int count(int *arr,int n)
{
    int i,c=0,k,p=0;
    for(i=1;i<n-1;i++)
    {
        if(arr[i-1]%2==0 && arr[i+1]%2!=0)
        {
            c++;
        }
        else if(arr[i-1]%2!=0 && arr[i+1]%2==0)
        {
            p++;
        }
    }
    k=c+p;
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
    k=count(arr,n);
    printf("%d",k);
}