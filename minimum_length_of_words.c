#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    scanf("%[^
]s",a);
    int I=strlen(a),i,c=0,k=I;
    for(i=0;i<I;i++)
    {
        if(a[i]!=' ')
        {
            c++;
        }
        else
        {
            if(k>c)
            {
                k=c;
            }
            c=0;
        }
    }
    printf("%d",k);
}