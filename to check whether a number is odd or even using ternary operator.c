//to check whether a number is odd or even
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
char ch;
printf("1 to check odd or even\n");
printf("2 to check positive or negative\n");
printf("3 to check alphabet or not\n");
printf("4 to check vowel or not\n");
printf("enter your choice\n");
scanf("%d",&a);
switch(a)
{
case 1:
printf("to check odd or even\n");
scanf("%d",&b);
(b%2==0)?printf("the number %d is odd",b):printf("the number %d is even",b);
break;
case 2:
printf("to check positive or negative\n");
scanf("%d",&b);
(b>0)?printf("the number is positive"):printf("the number is negative");
break;
case 3:
printf("to check alphabet or not\n");
scanf("%d",&ch);
(b>=65&&ch<=90||b>=97&&b<=122)?printf("it is character"):printf("it is not character");
break;
case 4:
    printf("to check vowel or not\n");
   scanf("%c",&ch);
    (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')?printf("it is vowel"):printf("it is not vowel");
    break;
default:
printf("invalid character");
break;

}
getch();
}
