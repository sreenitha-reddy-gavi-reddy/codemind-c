#include<stdio.h>
#include<math.h>
int gcd(int a,int b)
{
    if(b>a)
    {
        return gcd(b,a);
    }
    else if(b==0)
    {
        return a;
    }
    else
    {
        return gcd(b,a%b);
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int N,A,B,K;
        scanf("%lld%lld%lld%lld",&N,&A,&B,&K);
        long long int a,b,c;
        a=N/A;
        b=N/B;
        c=N/(A*B/gcd(A,B));
        if(a+b-2*c>=K)
        printf("Win
");
        else
        printf("Lose
");
    }
    return 0;
}