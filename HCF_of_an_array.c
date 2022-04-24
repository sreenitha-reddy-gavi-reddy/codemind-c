#include<stdio.h>
int main()
{
    int size,i,gcd;
    scanf("%d",&size);
    int arr[size];
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    gcd=arr[0];
    int j=1;
    while(j<size)
    {
        if(arr[j]%gcd==0)
        {
            j++;
        }
        else
        {
            gcd=arr[j]%gcd;
            i++;
        }
    }
    printf("%d",gcd);
    return 0;
}