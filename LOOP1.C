#include<stdio.h>
#include<conio.h>
void main()

{int a,i;
clrscr();
printf("Enter the number");
scanf("%d",&a);

i=1;
while(i<=10)
    {
	printf("\n%dx%d = %d",a,i,a*i);
	i++;
    }
getch();
}