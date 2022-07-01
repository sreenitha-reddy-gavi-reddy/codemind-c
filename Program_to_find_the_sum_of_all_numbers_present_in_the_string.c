#include<stdio.h>
int main()
{
    int i,sum=0;
    char str[20];
    for(i=0;i<=20;i++)
    {
        scanf("%[^
]",&str[i]);
    }
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            sum+=str[i]-'0';
        }
    }
    printf("%d",sum);
}