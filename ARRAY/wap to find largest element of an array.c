/*
date: 2018/01/05
question:
wap to find largest element of an array
*/
#include<stdio.h>
#include<conio.h>
int main()
{
int a[5],i,large=0;
printf("enter the 5 number\n");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{
 if(a[i]>large)
 large=a[i];
}
printf(" the largest number is %d",large);
getch ();
return 0;
}
