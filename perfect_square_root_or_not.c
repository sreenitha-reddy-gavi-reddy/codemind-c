#include<stdio.h>
int main()
{
    int i,number;
    scanf("%d",&number);
    for(i=0;i<=number;i++)
    {
        if(number==i*i)
        {
            printf("True");
            return 0;
        }
    }
    printf("False");
    return 0;
}