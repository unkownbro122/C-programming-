
#include<stdio.h>
#include<conio.h>

void main()
{
int a,b,c,d,e;
float sum,per;
clrscr();
printf("Enter any 5 marks of any subjects= ");
scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

sum=a+b+c+d+e;
per=(sum/500)*100;
printf("\n percentage= %f",per);

if(per>=90)
{printf("\n Grade A");}
else if ((per>=80)&&(per<=89))
{printf("\n Grade B");}
else if ((per>=60)&&(per<=79))
{printf("\n Grade C");}
else
{printf("\n Grade D");}
getch();

}
