#include<stdio.h>
int main()
{
    int L,R,t,count=0,r,i;
    scanf("%d",&t);
    while(t-->0)
    {
        scanf("%d%d",&L,&R);
        count=0;
        for(i=L;i<=R;i++)
        {
            r=i%10;
            if(r==2 || r==3 || r==9)
            count++;
        }
        printf("%d
",count);
    }
}