#include<stdio.h>
int main()
{
    char str[100];
    int i,c=0;
    scanf("%[^
]s",&str[i]);
    for(i=0;str[i]!=NULL;i++)
    {
        if((str[i]>='0')&&(str[i]<='9'))
        {
            c++;
        }
    }
    if(c==0)
    {
        printf("Doesn't contain digit");
    }
    else
    {
        printf("Contains %d digit",c);
    }
}