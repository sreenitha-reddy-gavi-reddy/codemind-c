#include<stdio.h>
int main()
{
    int n1,n2,i,j,sum1=0,sum2=0;
    scanf("%d",&n1);
    scanf("%d",&n2);
    for(i=1;i<n1;i++)
    {
        if(n1%i==0)
        {
            sum1=sum1+i;
        }
    }
    for(j=1;j<n2;j++)
    {
        if(n2%j==0)
        {
            sum2=sum2+j;
        }
    }
    if(n1==sum2&&n2==sum1)
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
}