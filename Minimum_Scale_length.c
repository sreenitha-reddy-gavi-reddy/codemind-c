#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,arr[n],min;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    min=arr[0];
    int j=1;
    while(j<n)
    {
        if(arr[j]%min==0)
        {
            j++;
        }
        else
        {
            min=arr[j]%min;
            i++;
        }
    }
    printf("%d",min);
}