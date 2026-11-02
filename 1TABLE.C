// sum of two matrix
#include<stdio.h>
#include<conio.h>

void main()
{int A[3][3],B[3][3],sum[3][3],r,c;
clrscr();
printf("Enter the Element of A matrix= ");
for(r=0;r<=2;r++)
   {
    for(c=0;c<=2;c++)
	{scanf("%d",&A[r][c]);}
			       }
printf("Enter the Element of B matrix= ");
for(r=0;r<=2;r++)
   {
    for(c=0;c<=2;c++)
	{scanf("%d",&B[r][c]);}}

 printf("The sum of MATRIX is \n");
 for(r=0;r<=2;r++)
 {for(c=0;c<=2;c++)
 {sum[r][c]=A[r][c]+B[r][c];}}

 for(r=0;r<=2;r++)
 {for(c=0;c<=2;c++)
  {printf("%d ",sum[r][c]);}
  printf("\n");
  }




		    getch();
		   }









