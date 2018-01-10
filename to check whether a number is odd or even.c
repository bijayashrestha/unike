//to check whether a number is odd or even
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
printf("1 to check odd or even, 2 to check positive or negative, 3 to check alphabet or not\n");
printf("enter the number\n");
scanf("%d",&a);
switch(a)
{
case 1:
printf("to check odd or even\n");
scanf("%d",&b);
if(b%2==0)
{
    printf("it is odd\n ");
}
else
{
    printf("it is even");
}
break;
case 2:
printf("to check positive or negative\n");
scanf("%d",&b);
if(b>=0)
{
    printf("it is positive");
}
else
{
    printf("it is negative");
}
break;
case 3:
printf("to check alphabet or not\n");
scanf("%d",&b);
if(b>=65&&b<=90||b>=97&&b<=122)
{
    printf("it is alphabet");
}
else
{
    printf("it is not alphabet");
}
break;
default:
printf("invalid character");
break;

}
getch();
}
