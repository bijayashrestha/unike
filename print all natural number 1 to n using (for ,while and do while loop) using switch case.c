/*date:2018/03/10
author:bijaya shrestha
program:print all natural number 1 to n using (for ,while and do while loop) using switch case*/
#include<stdio.h>
#include<conio.h>
int main()
{
 int n,s,a=1;
 printf("1 to use for loop\n");
 printf("2 to use for while loop\n");
 printf("3 to use for do while loop\n");
 printf("enter your choice\n");
 scanf("%d",&s);
 switch(s)
 {
  case 1:
  printf("using for loop\n");
  scanf("%d",&n);
  for(a=1;a<=n;a++)
  {
  printf("%d\n",a);
  }
  break;
  case 2:
  printf("using while loop\n");
  printf("enter the n number for loop\n");
  scanf("%d",&n);
  while(a<=n)
  {
  printf("%d\n",a++);
  }
  break;
  case 3:
  printf("using do while loop\n");
  printf("enter the n number for loop\n");
  scanf("%d",&n);
  do{
  printf("%d\n",a++);
}while(a<=n);
  break;
  default :
    {

        printf("invalid keyword");
    }
 }
 getch();
return 0;
}
