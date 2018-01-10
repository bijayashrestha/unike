/*author=bijaya shrestha
program name=wap to find largest among three number
date=2017/12/21
algorithm:
step 1=start
step 2=declare a,b,c
step 3=print'enter three number'
step 4=input a,b,c
step 5=compare a with b and c ,if a is greater than b and c then display a is greater or move to step 6.
step 6=compare b with a and c , if b is greater than a and c then display b is greater or move to step 7.
step 7=else print c is greater
step 8=stop
*/
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("enter three number\n");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
{printf("a is greater than b and c");}
if(b>c&&b>a)
{printf("b is greater than a and c");}
else
{printf("c is greater than b and a");}
getch();
}
