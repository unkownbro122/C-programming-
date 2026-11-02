/* find out sum and average of 15 numbers given by the user at even blocks*/
#include<stdio.h>
#include<conio.h>

void main()
{int a[15],i,sum=0;
float avg;
clrscr();
printf("\n Enter 15 number= ");

for(i=0;i<=14;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=14;i=i+2)
 {
 sum=sum+a[i];
 }
avg=sum/15;
printf("\n sum= %d",sum);
printf("\n avg= %f",avg);


getch();
}