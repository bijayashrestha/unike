/* date:2018/01/11
author: bijaya shrestha
program: print all alphabet using for,while and do while loop*/
#include<stdio.h>
#include<conio.h>
int main()
{
int a=65,s;
printf("1 for using for loop\n");
printf("2 for using while loop\n");
printf("3 for using do while loop\n");
printf("enter your choice\n");
scanf("%d",&s);
switch(s)
{
case 1:
    printf("using for loop\n");
printf("the alphabet from a to z is \n");
for(a=65;a<=90;a++)
{
printf("%c\n",a);
}
break;
case 2:
    printf("using while loop\n");
    printf("the alphabet from a to z is \n");
    while(a>=65&&a<=90)
    {

        printf("%c\t",a++);
    }
    break;
case 3:
    printf("using  do while loop\n");
    printf("the alphabet from a to z is \n");
    do{
        printf("%c\t",a++);
    }while(a>=65&&a<=90);
    break;
default :
    printf("invalid character\n");
    break;
}
getch();
return 0;
}
