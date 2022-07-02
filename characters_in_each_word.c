#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,c=0;
    char a[100];
    scanf("%[^
]s",a);
    int I=strlen(a);
    for(i=0;i<I;i++)
    {
        if(a[i]!=' ')
        {
            c++;
        }
        if(a[i]==' ' || i==I-1)
        {
            printf("%d ",c);
            c=0;
        }
    }
}