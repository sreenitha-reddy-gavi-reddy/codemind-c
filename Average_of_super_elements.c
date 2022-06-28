#include<stdio.h>
int main()
{
    int n,arr[100],i,c=0,j,m=0,x=0;
    float s=0,avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        x=arr[i];
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
            }
        }
        if(x==c)
        {
            s=s+arr[i];
            m++;
            arr[i]=0;
        }
    }
    if(m==0)
    {
        printf("-1");
    }
    else
    {
        avg=s/m;
        printf("%.2f",avg);
    }
}