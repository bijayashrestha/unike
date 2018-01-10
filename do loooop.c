#include<stdio.h>
#include<conio.h>
void main()
{
    int i=1,n;
    printf("Enter n");
    scanf("%d",&n);
    i=0;
    do
    {
    printf("%d\n",i);
    i++;
    }
    while(i<=n);
    getch();
    }
