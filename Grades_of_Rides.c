#include<stdio.h>
int main()
{
    int p,q,r;
    scanf("%d%d%d",&p,&q,&r);
    if(p>50 && q>60 && r>100)
    {
        printf("%d",10);
    }
    else if(p>50 && q>60)
    {
        printf("%d",9);
    }
    else if(q>60 && r>100)
    {
        printf("%d",8);
    }
    else if(p>50 && r>100)
    {
        printf("%d",7);
    }
    else if(p>50)
    {
        printf("%d",6);
    }
    else
    {
        printf("%d",5);
    }
}