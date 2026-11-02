#include<stdio.h>
#include<conio.h>

void main()
{int a,b;
clrscr();
printf("\n Enter the first number= ");
scanf("%d",&a);
printf("\n Enter the second number= ");
scanf("%d",&b);

a=a+b;
b=a-b;
a=a-b;

printf("\n first number= %d",a);
printf("\n second number= %d",b);
getch();
}