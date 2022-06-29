#include<stdio.h>
int main()
{
    int n,arr[100],c=0,s,t,d,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        t=arr[i];
        s=0;
        while(t)
        {
            d=t%10;
            t=t/10;
            s=s*10+d;
        }
        if(s==arr[i])
        {
            c++;
        }
    }
    printf("%d",c);
}