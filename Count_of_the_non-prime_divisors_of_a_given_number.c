#include<stdio.h>
int non_prime(int *arr,int p)
{
    int i,c=0,j,k=0,h;
    for(i=0;i<p;i++)
    {
        for(j=1;j<=arr[i];j++)
        {
            if(arr[i]%j==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            k++;
        }
        c=0;
    }
    h=p-k;
    return h;
}
int main()
{
    int n,i,arr[100],p=0,h,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            p++;
            arr[k]=i;
            k++;
        }
    }
    h=non_prime(arr,p);
    printf("%d ",h);
}