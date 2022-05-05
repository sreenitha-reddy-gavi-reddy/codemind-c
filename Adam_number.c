#include<stdio.h>
int main()
{
    int num,r,k=0,s=1,u,v=0,t=1;
    scanf("%d",&num);
    s=num*num;
    while(num!=0)
    {
        r=num%10;
        k=k*10+r;
        num=num/10;
    }
    t=k*k;
    while(t!=0)
    {
        u=t%10;
        v=v*10+u;
        t=t/10;
    }
    if(s==v)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}