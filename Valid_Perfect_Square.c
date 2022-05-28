#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int num;
        int iVar;
        float fVar;
        scanf("%d",&num);
        fVar=sqrt((double)num);
        iVar=fVar;
        if(iVar==fVar)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}