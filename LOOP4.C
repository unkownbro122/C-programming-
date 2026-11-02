/* this is a program on reverse the number given by user */

#include<stdio.h>
#include<conio.h>

void main()
{
 int r,n,rev=0;
   clrscr();
       printf("\n Enter number= ");
   scanf("%d",&n);

 while(n>0)
 {
      r= n%10;
	 rev= rev*10+r;
      n=n/10;
 }
  printf("\n Reverse is %d",rev);
  getch();
}
