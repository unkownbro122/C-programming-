#include<stdio.h>
#include<conio.h>

void main()
{int num,rev=0,dup,r,sum=0;
clrscr();
printf("Enter the number= ");
scanf("%d",&num);
dup=num;

while(num>0)
{r=num%10;
rev=rev*10+r;
num=num/10;
sum=sum+r;
}
printf("\n reverse of %d is %d",dup,rev);
printf("\n the sum is %d",sum);
getch();
}

