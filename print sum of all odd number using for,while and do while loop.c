/* date:2018/01/11
author: bijaya shrestha
program: print sum of all odd number using for,while and do while loop*/
#include<stdio.h>
#include<conio.h>
int main()
{
int s,a=501,sum;
printf("1 for using for loop\n");
printf("2 for using while loop\n");
printf("3 for using do while loop\n");
printf("enter your choice\n");
scanf("%d",&s);
switch(s)
{
case 1:
printf("you choose for loop\n");
printf("the sum of all odd number between 500 to 100 is \n");
for(;a<1000;a+=2)
{
    sum+=a;
}
printf("%d\n",sum);
break;
case 2:
printf("you choose while loop\n");
printf("the sum of all odd number between 500 to 1000 is \n");
while(a<1000)
{
sum+=a;
a+=2;
}
printf("%d\n",sum);
break;
case 3:
printf("you choose for loop\n");
printf("the odd number between 500 to 1000 is \n");
do
{
sum+=a;
a+=2;
}while(a<1000);
printf("%d\n",sum);
break;
defult:
    printf("invalid keyword");
}
getch();
return 0;
}
