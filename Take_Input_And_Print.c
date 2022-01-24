#include<stdio.h>
int main()
{
    char output[100];
    fgets(output,sizeof(output),stdin);
    printf("%s",output);
}