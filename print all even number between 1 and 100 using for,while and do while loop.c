/* date:2018/01/11
author: bijaya shrestha
program: print all even number between 1 and 100 using for,while and do while loop*/
int main()
{
int s,a=2;
printf("1 for using for loop\n");
printf("2 for using while loop\n");
printf("3 for using do while loop\n");
printf("enter your choice\n");
scanf("%d",&s);
switch(s)
{
case 1:
printf("you choose for loop\n");
printf("the even number between 1 to 100 is \n");
for(;a<100;a+=2)
{
printf("%d\n",a);

}
break;
case 2:
printf("you choose while loop\n");
printf("the even number between 1 to 100 is \n");
while(a<100)
{
printf("%d\n",a);
a+=2;
}
break;
case 3:
printf("you choose for loop\n");
printf("the even number between 1 to 100 is \n");
do
{
printf("%d\n",a);
a+=2;
}while(a<100);
break;
defult:
    printf("invalid keyword");
}
getch();
return 0;
}
