#include<stdio.h>
int main()
{
	int rs,cs,i,j,sum=0;
	scanf("%d%d",&rs,&cs);
	int a[rs][cs];
	for(i=0;i<rs;i++)
	{
		for(j=0;j<cs;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<rs;i++)
	{
		for(j=0;j<cs;j++)
		{
			sum=sum+a[i][j];
		}
}	
	printf("%d",sum);
	
}