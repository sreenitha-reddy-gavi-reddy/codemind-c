#include<stdio.h>
int add_digit(int n)
{
    int d,sum=0;
    while(n!=0)
    {
        d=n%10;
        n=n/10;
        sum=sum+d;
    }
    if(sum<10)
    {
        return sum;
    }
    return add_digit(sum);
}
int main()
{
    int n,k;
    scanf("%d",&n);
    k=add_digit(n);
    printf("%d",k);
}