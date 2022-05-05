#include<stdio.h>
int main()
{
    int i,n,j[20],odd=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&j[i]);
    }
    for(i=0;i<n;i++)
    {
        if(j[i]%2!=0)
        odd++;
    }
    if(odd<=2)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}