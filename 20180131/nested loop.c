/*date:2018/01/31
  question:
  1
  1 2
  1 2 3
  1 2 3 4
  1 2 3 4 5*/
  #include<stdio.h>
  #include<conio.h>
  int main()
  {
  int i,j,rows;
  printf("enter the number of rows\n");
  scanf("%d",&rows);
  for(i=1;i<=rows;i++)
  {
  for(j=1;j<=i;j++)
  {
  printf("%d\t",j);
  }
  printf("\n");
  }
  getch();
  return 0;
    }
