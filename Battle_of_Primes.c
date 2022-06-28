 #include<stdio.h>
int isprime(int n)
{
    int i,p=0,k;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            p++;
        }
    }
    if(p==2)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int n,m,i,k,p;
    scanf("%d%d",&n,&m);
    p=n+m;
    for(i=1;i<=2*p;i++)
    {
        k=isprime(p+i);
        if(k==1)
        {
            printf("%d ",i);
            break;
        }
    }
}