#include<stdio.h>
int search(int *arr,int n,int m)
{
    int i,k=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]==m)
        {
            k=1;
        }
    }
    return k;
}
int main()
{
    int n,m,i,arr[100],k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&m);
    k=search(arr,n,m);
    if(k==0)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
}