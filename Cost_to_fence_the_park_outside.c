#include<stdio.h>
int main()
{
    int L,B,W,C,To_cost,A;
    scanf("%d%d%d%d",&L,&B,&W,&C);
    if(L<=W-W || B<=W-W)
    {
        printf("Impossible");
    }
    else
    {
        A=((L+2*W)*(B+2*W))-L*B;
        To_cost=A*C;
        printf("%d",To_cost);
    }
    return 0;
}