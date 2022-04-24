#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=1;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        if(a[i]%2==1)
        {
            if(i%2!=0)
            {
                printf("False");
                return 0;
            }
        }
    }
    printf("True");
}