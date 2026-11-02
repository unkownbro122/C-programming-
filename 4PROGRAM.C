#include<stdio.h>
#include<conio.h>

void main ()
{int a,b,c;
clrscr();
printf("Enter the number= ");
scanf("%d %d",&a,&b);


c=a;
a=b;
b=c;
printf("\n FIRST NUMBER %d",a);
printf("\n SECOND NEMBER %d",b);
getch();


}