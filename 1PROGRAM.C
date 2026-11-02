#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,e;
float total,per;
clrscr();
printf("Enter the marks of 5 subjects");
scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

    total=a+b+c+d+e;
    printf("sum of 5 marks are = %f",total);

    per=(total/500)*100;
    printf("\n percentage of 5 subject=%f ",per);
    getch();



}
