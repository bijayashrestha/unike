  /*date:2018/01/31
    question:
    12345
    1234
    12
    1*/
  #include<stdio.h>
  #include<conio.h>
  int main()
  {
  int i,j,rows;
  printf("enter the number of rows\n");
  scanf("%d",&rows);
  for(i=rows;i>=1;i--)
  {
  for(j=1;j<=i;j++)
  {
  printf("%d",j);
  }
  printf("\n");
  }
  getch();
  return 0;
  }
