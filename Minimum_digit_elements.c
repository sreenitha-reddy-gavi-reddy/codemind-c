#include<stdio.h>
int main()
{
    int i,j,n,c=0,d=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        //printf("%d ",a[i]);
    }
    int min=a[0];
    for(i=0;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }
    //printf("%d ",min);
     while(min)
            {
                min=min/10;
                d++;
            }
    int k=0;
    for(i=0;i<n;i++)
    {
        c=0;
        j=a[i];
        if(j==0)
        {
            c=1;
        }
        else
        {
            while(j)
            {
                j=j/10;
                c++;
            }
        }
        if(d==c)
        {
            k++;
        }
    }
    printf("%d",k);
}