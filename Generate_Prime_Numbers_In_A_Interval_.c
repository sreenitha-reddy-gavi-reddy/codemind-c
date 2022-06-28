#include<stdio.h>
int factors(int num)
{
    int k=0,i;
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            k++;
        }
    }
    return k;
}
int main()
{
    int n,m,i,j,c=0,k;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        k=factors(i);
        if(k==2)
        {
            printf("%d
",i);
        }
    }
}