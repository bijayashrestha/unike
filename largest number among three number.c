/*date:2018/01/03
author:bijaya shrestha
program: find the largest number among the three number*/
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("enter the three number a,b,c respectively\n");
scanf("%d%d%d",&a,&b,&c);
(a>b&&a>c)?printf("the largest number is %d",a):((b>c)?printf("the largest number is %d",b):printf("the largest number is %d",c));
getch();
}
