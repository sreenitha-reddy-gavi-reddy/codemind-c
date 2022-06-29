#include<stdio.h>
int main()
{
    int n,arr[100],i,c=0,m=0,j;
    float avg,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=1;j<=arr[i];j++)
        {
            if(arr[i]%j==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            s=s+arr[i];
            m++;
        }
    }
    avg=s/m;
    printf("%.2f",avg);
}