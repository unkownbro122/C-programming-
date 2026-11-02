#include<stdio.h>
#include<conio.h>

void main()

{int C;
float F;
clrscr();

printf("\n Enter the temperature =");
scanf("%d",&C);

F=((C*9)/5)+32;
printf("Fahrenheit = %f",F);
getch();
}