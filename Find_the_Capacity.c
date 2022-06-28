#include<stdio.h>
int main()
{
    int s,t,se,b,c,p;
    scanf("%d%d%d",&t,&se,&b);
    p=2*se*t*b*512;
    c=p/1024;
    printf("%dKB",c);
}