#include<stdio.h>
int main()
{
    char str[100];
    int i,j,len,temp;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    len=i;
    i=0;
    j=len-i;
    while(i<j)
    {
        temp=str[j];
        str[j]=str[i];
        str[i]=temp;
        i++;
        j--;
    }
    printf("%s",str);
}