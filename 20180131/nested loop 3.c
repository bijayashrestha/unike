/*
Date:2018/01/31
question:
*
**
***
****
*****
*/
#include<stdio.h>
#include<conio.h>
int main()
{
int I,J,Rows;
printf("enter the number of rows\n");
scanf("%d",&Rows);
for(I=1;I<=Rows;I++)
{
for(J=1;J<=I;J++)
{
printf("*");
}
printf("\n");
}
getch();
return 0;
}
