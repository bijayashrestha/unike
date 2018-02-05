/*
date: 2018/01/05
question:
wap to find sum of element of an array
*/
#include<stdio.h>
#include<conio.h>
int main()
{
int a[5],i,sum=0;
printf("enter the 5 number\n");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{
 sum+=a[i];
}
printf(" the sum of total number is %d",sum);
getch ();
return 0;
}
