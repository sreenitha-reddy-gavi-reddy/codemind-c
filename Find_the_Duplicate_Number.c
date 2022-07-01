#include<stdio.h>
int main()
{
    int n,i,arr[100],j,c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j] && i!=j)
            {
                c=c+1;
            }
        }
        if(c!=0)
        {
            printf("%d",arr[i]);
            break;
        }
    }
}