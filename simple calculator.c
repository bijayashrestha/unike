

#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,sum,sub,mul,div,n;
printf("simple calculator");
printf("1 Addition \n");
printf(" 2 Subtraction \n");
printf(" 3 Multiplication \n");
printf(" 4 Division \n");
printf(" Enter your choice \n");
scanf("%d",&n);
printf("Enter two number \n");
scanf("%d%d",&a,&b);
switch(n)
{
case 1: sum=a+b;
printf("Sum is %d",sum);
break;
case 2: sub=a-b;
printf("Difference is %d",sub);
break;
case 3: mul=a*b;
printf("Product is %d", mul);
break;
case 4: div=a/b;
printf("Division is %d",div);
break;
default:printf("Invalid choice");
}
getch();
}

