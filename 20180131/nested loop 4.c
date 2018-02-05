  /*date:2018/01/31
    question:
 *****
 ****
 ***
 **
 *
  */
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
  printf("*");
  }
  printf("\n");
  }
  getch();
  return 0;
  }
