/*
date: 2018/01/05
question:
wap to declare and print element of an array
*/
#include<stdio.h>
#include<conio.h>
int main()
{
int a[5],i;
printf("enter the 5 number\n");
for(i=0;i<6;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<6;i++)
{
printf("the number you enter are: %d\n",a[i]);
}
getch ();
return 0;
}
