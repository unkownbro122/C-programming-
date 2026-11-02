// to show the working of arithmetic operators
#include<stdio.h>
#include<conio.h>

void main()
{int a,b;
float c;
clrscr();
printf("Enter 2 number= ");
scanf("%d %d",&a,&b);

c=a+b;
printf("%d+%d=%f",a,b,c);

c=a-b;
printf("\n %d-%d=%f",a,b,c);

c=a*b;
printf("\n %d*%d=%f",a,b,c);

c=a/b;
printf("\n %d/%d=%f",a,b,c);


getch();
}