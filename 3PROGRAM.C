#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{int P,R,T,n;
float SI,A,CI;
clrscr();

printf("\n Enter the principal= ");
scanf("%d",&P);

printf("\n Enter the Rate of Interest= ");
scanf("%d",&R);

printf("\n Enter the Time= ");
scanf("%d",&T);

printf("\n Enter the number of times= ");
scanf("%d",&n);

SI=(P*R*T)/100;
printf("\n Simple Interest = %f",SI);

A=P*pow((1+R/n),(n*T));
printf("\n Amount= %f",A);

CI=A-P;
printf("\n Compound interest= %f",CI);

getch();
}

