#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    scanf("%[^
]s",a);
    int I=strlen(a),i,c=1;
    for(i=0;i<I;i++)
    {
        if(a[i]==' ')
        {
            c++;
        }
    }
    printf("%d",c);
}