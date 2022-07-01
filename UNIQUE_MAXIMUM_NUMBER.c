#include<stdio.h>
int main()
{
    int n,i,arr[100],p=0,h=0,j,c;
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
            if(arr[i]==arr[j] and i!=j)
            {
                c=c+1;
            }
        }
        if(c==0)
        {
            if(p<arr[i])
            {
                p=arr[i];
                h=h+1;
            }
        }
    }
    if(h!=0)
    {
        printf("%d",p);
    }
    else
    {
        printf("-1");
    }
}