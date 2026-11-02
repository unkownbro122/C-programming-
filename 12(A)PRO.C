//using case switch default
#include<stdio.h>
#include<conio.h>

void main()
{float a,b;
char operators;
clrscr();

printf("Enter the first number= ");
scanf("%f",&a);
printf("Enter operator to be use= ");
scanf(" %c",&operators);
printf("Enter the second number= ");
scanf("%f",&b);

switch(operators){
case '+':
printf("%f%c%f=%f",a,operators,b,a+b);
break;

case '-':
printf("%f%c%f=%f",a,operators,b,a-b);
break;

case '*':
printf("%f%c%f=%f",a,operators,b,a*b);
break;

case '/':
printf("%f%c%f=%f",a,operators,b,a/b);
break;

default:
printf("Invalid operator ");
}
getch();
}
