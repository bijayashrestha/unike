#include<stdio.h>
#include<conio.h>
void main()
{
float a,p,r,n,t,ci;
printf("enter p,r,n,t respectively\n");
scanf("%f%f%f%f",&p,&r,&n,&t);
a=p*(1+r/n)^n*t;
ci=a-p;
printf("the ci= %f",ci);
getch();

}
