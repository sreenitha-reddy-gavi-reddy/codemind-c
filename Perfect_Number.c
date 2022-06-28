#include<stdio.h>
int perfect_num(int n)
{
    int sum=0,i;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    return sum;
}
int main()
{
    int n,k;
    scanf("%d",&n);
    k=perfect_num(n);
    if(k==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}