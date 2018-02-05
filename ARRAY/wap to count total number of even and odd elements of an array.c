/*
date: 2018/01/05
question:
wap to count total number of even and odd elements of an array
*/
#include<stdio.h>
#include<conio.h>
int main()
{
int a[5],i,even=0,odd=0;
printf("enter the 5 number\n");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{
 if(a[i]%2==0)
 even++;
 else
 odd++;
}
printf(" the even number is %d and odd number is %d",even,odd);
getch ();
return 0;
}
