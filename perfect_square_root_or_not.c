#include<stdio.h>
#include<math.h>
int main()
{
    int m,n;
    float p;
    scanf("%d",&n);
    p=sqrt(n);
    m=p;
    if(m==p)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}