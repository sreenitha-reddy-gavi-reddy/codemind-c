#include<stdio.h>
#include<string.h>
int convert(char);
int main()
{
    int i=0,n=0;
    char rn[100];
    scanf("%s",rn);
    while(rn[i])
    {
        if(convert(rn[i]<0))
        {
            return 0;
        }
        if(strlen(rn-i)>2)
        {
            if(convert(rn[i])<convert(rn[i+2]))
            {
                printf("
Invalid rn.
");
                return 0;
            }
        }
        if(convert(rn[i])>=convert(rn[i+1]))
        n=n+convert(rn[i]);
        else
        {
            n=n+(convert(rn[i+1])-convert(rn[i]));
            i++;
        }
        i++;
    }
    printf("%d",n);
    return 0;
}
int convert(char ch)
{
    int value=0;
    switch(ch)
    {
        case'I':value=1;break;
        case'V':value=5;break;
        case'X':value=10;break;
        case'L':value=50;break;
        case'C':value=100;break;
        case'D':value=500;break;
        case'M':value=1000;break;
        caseNULL:value=0;break;
        default:value=-1;
    }
    return value;
}