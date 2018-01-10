#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
printf("enter a number a,b,c\n");
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
{
printf("%d is a greatest",a);
}
else if(b>a && b>c)
{
printf("%d is a greatest",b);
}
else
{
printf("%d is a greatest",c);
}
getch();
return 0;
}

