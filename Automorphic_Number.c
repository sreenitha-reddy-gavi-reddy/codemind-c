#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int sqr,temp,last;
    int count=0;
    sqr=n*n;
    temp=n;
    while(temp>0)
    {
        count++;
        temp=temp/10;
    }
    int flag=floor(pow(10,count));
    last=sqr%flag;
    if(last==n)
    printf("Automorphic Number");
    else
    printf("Not an Automorphic Number");
}