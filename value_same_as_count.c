#include<stdio.h>
int main()
{
    int n,arr[100],i,m=0,c=0,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=1;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j] && i!=j)
            {
                c++;
                arr[j]=-1;
            }
        }
        if(c==arr[i])
        {
            m++;
        }
    }
    printf("%d",m);
}