// Factorial
#include<stdio.h>
#include<conio.h>
void main()
{long int a,i,fact=1;
clrscr();
printf("Enter the numbers= ");
scanf("%ld",&a);


for(i=a;i>0;i--)
{fact=fact*i;}

printf("The factorial of %ld is %ld",a,fact);

getch();
}