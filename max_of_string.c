#include<stdio.h>
int main()
{
    char str[100];
    int i,m;
    scanf("%[^
]s",str);
    m=0;
    for(i=0;str[i]!=NULL;i++)
    {
        if(m<str[i])
        {
            m=str[i];
        }
    }
    printf("%c",m);
}