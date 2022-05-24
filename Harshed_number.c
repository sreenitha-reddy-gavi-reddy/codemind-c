#include<stdio.h>
int main()
{
    int n,s=0,i,n1;
    scanf("%d",&n);
    n1=n;
    while(n1!=0)
    {
        i=n1%10;
        s+=i;
        n1=n1/10;
    }
    if(n%s==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}