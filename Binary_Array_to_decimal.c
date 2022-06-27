#include<stdio.h>
#include<math.h>
int binary(int *arr,int n)
{
    int i,k=0,sum=0;
    for(i=n-1;i>=0;i--)
    {
        sum=sum+arr[i]*pow(2,k);
        k++;
    }
    return sum;
}
int main()
{
    int i,n,arr[100],k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    k=binary(arr,n);
    printf("%d",k);
}