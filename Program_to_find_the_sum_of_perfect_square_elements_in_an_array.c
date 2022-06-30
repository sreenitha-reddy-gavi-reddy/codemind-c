#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,arr[100],h=0,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        h=sqrt(arr[i]);
        if(arr[i]==h*h)
        {
            sum=sum+arr[i];
        }
    }
    printf("%d",sum);
}