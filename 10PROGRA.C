#include<stdio.h>
#include<conio.h>
void main()
{int year;
clrscr();
printf("Enter a year= ");
scanf("%d",&year);

if((year%4)==0)
printf("This is a leap year");

else if((year%100)==0)
printf("This is not a leap year");

else if ((year%400)==0)
printf("This is a leap year");

else
printf("This is not a leap year");

getch();
}