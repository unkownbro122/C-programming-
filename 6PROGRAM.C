// to show the working of bitwise operators
#include<stdio.h>
#include<conio.h>

void main()
{int a,b,c;
clrscr();
printf("Enter 2 number= ");
scanf("%d %d",&a,&b);

c=a&b;
printf("\n %d&%d=%d",a,b,c);

c=a|b;
printf("\n %d|%d=%d",a,b,c);

c=a^b;
printf("\n %d^%d=%d",a,b,c);

c=a<<b;
printf("\n %d<<%d=%d",a,b,c);

c=a>>b;
printf("\n %d>>%d=%d",a,b,c);

getch();
}