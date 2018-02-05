/*
date: 2018/01/05
question:
wap to display elements of an array in reverse order
*/
#include<stdio.h>
#include<conio.h>
int main()
{
int a[5],i;
printf("enter the 5 number\n");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
printf("\n");
for(i=4;i>=0;i--)
{

 printf("%d\n",a[i]);
}
getch ();
return 0;
}
