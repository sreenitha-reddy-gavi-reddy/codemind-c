#include<stdio.h>
int element(int *arr,int n,int m)
{
    int i,k;
    for(i=0;i<n;i++)
    {
        if(arr[i]==m)
        {
            k++;
        }
    }
    return k;
}
int main()
{
    int n,i,arr[100],k,sum=0,avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    avg=sum/n;
    k=element(arr,n,avg);
    if(k==0)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
}