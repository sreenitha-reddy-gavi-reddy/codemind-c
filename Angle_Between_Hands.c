#include<stdio.h>
#include<math.h>
int main()
{
    int h,m;
    float a;
    scanf("%d:%d",&h,&m);
    a=abs(h*30-(11*m)/2.0);
    if(a<360-a)
    {
        if(a>(int)a)
        printf("%.1f",a);
        else
        printf("%.1f",(float)a);
    }
    else
    {
        if(360-a>(float)(360-a))
        printf("%.1f",360-a);
        else
        printf("%.1f",(float)(360-a));
    }
}