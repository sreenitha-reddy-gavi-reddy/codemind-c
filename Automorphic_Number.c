#include<stdio.h>
int digit_count(int n)
{
    int d,c=0;
    while(n!=0)
    {
        d=n%10;
        n=n/10;
        c++;
    }
    return c;
}
int reverse(int n)
{
    int d,m=0;
    while(n!=0)
    {
        d=n%10;
        n=n/10;
        m=m*10+d;
    }
    return m;
}
int main()
{
    int n,m,sq,p,c=0,d,k,r;
    scanf("%d",&n);
    sq=n*n;
    m=n;
    c=digit_count(n);
    while(sq!=0)
    {
        d=sq%10;
        sq=sq/10;
        r=r*10+d;
        p++;
        if(p==c)
        {
            break;
        }
    }
    k=reverse(r);
    if(k==m)
    {
        printf("Automorphic Number");
    }
    else
    {
        printf("Not an Automorphic Number");
    }
}