#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,m;
    scanf("%d%d%d",&x,&y,&m);
    int c=pow(x,y);
    int s=c%m;
    printf("%d",s);
}