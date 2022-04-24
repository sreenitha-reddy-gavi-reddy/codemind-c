#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[1001]={0};
    for(int i=0;i<n;i++)
    {
        int x;
        scanf("%d",&x);
        a[x]++;
    }
    int count=0;
    for(int i=0;i<=1000;i++)
    {
        count+=a[i]/2;
    }
    printf("%d",count);
}