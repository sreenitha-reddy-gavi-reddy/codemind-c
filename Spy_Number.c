#include<stdio.h>
int main()
{
    int num,i;
    scanf("%d",&num);
     //Sum of digit
    int sum=0,mult=1,rem;
    while(num!=0)
    {
        rem=num%10;
        sum+=rem;
        mult*=rem;
        num/=10;
    }

   if(sum==mult)
    printf("Spy Number");
   else
    printf("Not Spy Number");
    return 0;
}