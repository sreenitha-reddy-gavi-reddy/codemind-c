#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,n;
    scanf("%d",&n);
    a=sqrt(n);
    b=a*a;
    if(b==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}