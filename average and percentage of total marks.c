#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,e,f,g,avg,per;
printf("enter your marks of seven subject\n");
scanf("%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g);
avg=(a+b+c+d+e+f+g)/7;
per=100*(a+b+c+d+e+f+g)/700;
printf("the average is %d and percentage is %d",avg,per);
}
