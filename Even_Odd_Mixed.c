#include<stdio.h>
int main()
{
    int n,r,odd=0,even=0;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        if(r%2==0)
        even++;
        else
        odd++;
        n=n/10;
    }
    if(odd==0)
    {
        printf("Even");
    }
    else if(even==0)
    {
        printf("Odd");
    }
    else
    {
        printf("Mixed");
    }
}