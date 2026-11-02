//using else if statement
#include<stdio.h>
#include<conio.h>

void main()
{float a,b;
char operators;
clrscr();

printf("Enter the first number= ");
scanf("%f",&a);

printf("Enter the operators= ");
scanf(" %c",&operators);

printf("Enter the second number= ");
scanf("%f",&b);

if(operators=='+')
{printf("%f%c%f=%f",a,operators,b,a+b);}

else if(operators=='-')
{printf("%f%c%f=%f",a,operators,b,a-b);}

else if(operators=='*')
{printf("%f%c%f=%f",a,operators,b,a*b);}

else if(operators=='/')
{printf("%f%c%f=%f",a,operators,b,a/b);}

else
{printf("Invalid operators");}

getch();
}
