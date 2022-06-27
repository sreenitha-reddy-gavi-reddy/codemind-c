#include<stdio.h>
int even_array(int *arr,int n)
{
    int i,k=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            k++;
        }
    }
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
    k=even_array(arr,n);
    if(k==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}