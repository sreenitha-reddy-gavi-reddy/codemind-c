#include<stdio.h>
int main()
{
    int n,arr[100],i,j,s=0,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(j=0;j<n;j++)
    {
        for(i=0;i<n;i++)
        {
            if(arr[j]==arr[i] &&i!=j)
            {
                arr[i]=-1;
            }
        }
    }
    for(int k=0;k<n;k++)
    {
        if(arr[k]%2==1)
        {
            s++;
        }
    }
    printf("%d",s);
}