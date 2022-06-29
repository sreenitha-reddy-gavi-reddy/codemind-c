#include<stdio.h>
int main()
{
    int n,arr[100],m,s,c,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    m=n/2;
    for(i=0;i<m;i++)
    {
        s=s+arr[i];
    }
    for(i=m;i<n;i++)
    {
        c=c+arr[i];
    }
    printf("%d
",s);
    printf("%d",c);
}