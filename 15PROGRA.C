// palindrome number
#include<stdio.h>
#include<conio.h>
void main()
{int num,dup,r,rev=0;
clrscr();
printf("Enter the number= ");
scanf("%d",&num);

dup=num;
while(num>0)
{r=num%10;
rev=rev*10+r;
num=num/10;}

if(dup==rev)
{printf("This is a palindrome number");}

else
{printf("This is not a palindrome number");}

getch();
}



