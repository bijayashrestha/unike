#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float x,X,a,b,c;
printf("enter the value of a,b,c respectively\n");
scanf("%f%f%f",&a,&b,&c);
x=(-b+sqrt((b*b)-4*a*c))/2*a;
X=(-b-sqrt((b*b)-4*a*c))/2*a;
printf("the positive value of x is %f and the negative value of x is %f",x,X);
getch();
}
