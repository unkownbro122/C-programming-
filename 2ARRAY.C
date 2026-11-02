//Linear search

#include<stdio.h>
#include<conio.h>

void main()
{int a[20],i,s,found=0;
clrscr();

printf("\n Enter 20 Number= ");
for (i=0;i<=19;i++)
{scanf("%d",&a[i]);}

printf("\n Enter the number you have to search= ");
scanf("%d",&s);

for(i=0;i<=19;i++)
{if (s==a[i])
 {found=1;
  break;}
}

if(found==1)
{printf("\n Data is found");}
else
{printf("\n Data is not found");}

getch();
}
