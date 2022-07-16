#include<stdio.h>
#include<ctype.h>
int main()
{
    int i=0,special=0;
    char str[100];
      scanf("%[^
]s",str);
    while(str[i]!=NULL)
    {
        if((isalpha(str[i])==0)&&(isdigit(str[i])==0)&&(isspace(str[i])==0))
        special++;
        i++;
    }
    printf("%d",special);
}