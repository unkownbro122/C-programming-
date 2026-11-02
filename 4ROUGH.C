
// to find the number in array
#include<stdio.h>
#include<conio.h>

void main()
{int a[20],i,S;
clrscr();
printf("Enter the 20 number= ");
for(i=0;i<=19;i++)
{
 scanf("%d",&a[i]);
}

printf("Enter the number to be search= ");
scanf("%d",&S);

for(i=0;i<=19;i++)
{ if(a[i]==S)
 { printf("Data found");
  break;}
}
getch();
}