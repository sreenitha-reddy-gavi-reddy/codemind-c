#include<stdio.h>
int main()
{
    int n,remainder,largest=0;
    scanf("%d",&n);
    while(n>0)
    {
        remainder=n%10;
        if(largest<remainder)
        {
            largest=remainder;
        }
        n=n/10;
    }
    printf("%d",largest);
    return 0;
}