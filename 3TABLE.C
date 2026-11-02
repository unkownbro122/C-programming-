#include<stdio.h>
#include<conio.h>

void main()

{int A[3][4],T[4][3],r,c;
clrscr();
printf("Enter the element of A matrix(3x4)= ");
for(r=0;r<=2;r++)
 {for(c=0;c<=3;c++)
   {scanf("%d",&A[r][c]);}}

   for(r=0;r<=3;r++)
     {for(c=0;c<=2;c++)
	{T[r][c]=A[c][r];}}

	printf("Transpose of A matrix= \n");
	for(r=0;r<=3;r++)
	  {for(c=0;c<=2;c++)
	     {printf("%d  ",T[r][c]);}
	     printf("\n");
	     }
	     getch();
}