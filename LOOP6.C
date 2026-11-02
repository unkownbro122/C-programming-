#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{long int a=0,b=1,c,i,n;
clrscr();
printf("\n Enter the number= ");
scanf("%ld",&n);

printf(" %ld \n %ld",a,b);

for(i=1;i<=n-2;i++)
{
 c=a+b;
  printf("\n %ld",c);
  a=b;
  b=c;
 delay(1000);
 }

getch();
}