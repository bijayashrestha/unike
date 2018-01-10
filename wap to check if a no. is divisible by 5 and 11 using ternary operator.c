/*date:2018/01/03
author:bijaya shrestha
program: wap to check if a no. is divisible by 5 and 11 using ternary operator*/
#include<stdio.h>
#include<conio.h>
void main()
{
int a;
printf("enter the number\n");
scanf("%d",&a);
(a%5==0)?printf("the number is divisible by 5"):((a%11==0)?printf("the number is divisible by 11"):printf("the number is not divisible by 5 and 11"));
getch();
}
