#include<stdio.h>
int main()
{
    char str[100];
    int i,j,c=0,m=0;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        c=1;
        for(j=0;str[j]!=NULL;j++)
        {
            if(str[i]==str[j] && i!=j)
            {
                c++;
            }
        }
        if(c==1)
        {
            printf("%d",i);
            m++;
            break;
        }
    }
    if(m==0)
    {
        printf("-1");
    }
}