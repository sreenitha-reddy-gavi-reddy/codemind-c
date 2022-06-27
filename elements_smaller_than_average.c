#include<stdio.h>
int average(int *arr,int n)
{
    int avg,i,sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    avg=sum/n;
    return avg;
}
int main()
{
    int i,n,arr[100],k,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    k=average(arr,n);
    for(i=0;i<n;i++)
    {
        if(arr[i]<=k)
        {
            c++;
        }
    }
    printf("%d",c);
}