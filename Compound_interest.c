#include<stdio.h>
#include<math.h>
int main()
{
    int p,t;
    double r,ci;
    scanf("%d%lf%d",&p,&r,&t);
    ci=p*pow((1.0+r/100),t);
    printf("%.2lf",ci);
}