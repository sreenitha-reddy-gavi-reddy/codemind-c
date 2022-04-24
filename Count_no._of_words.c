#include<stdio.h>
#include<string.h>
int main()
{
    char s[200];
    int count=0,i;
    scanf("%[^
]s",s);
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]==' ' && s[i+1]!=' ')
        count++;
    }
    printf("%d
",count+1);
}