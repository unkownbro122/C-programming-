#include<stdio.h>
#include<conio.h>
void main()
{int A[3][3],B[3][3],sub[3][3],r,c;
clrscr();
printf("Enter the Elements of A= ");
for(r=0;r<=2;r++)
 {for(c=0;c<=2;c++)
    {scanf("%d",&A[r][c]);}}

    printf("Enter the Elements of B= ");
    for(r=0;r<=2;r++)
      {for(c=0;c<=2;c++)
	 {scanf("%d",&B[r][c]);}}

	 printf("Subtraction of Matrix are \n");
	 for(r=0;r<=2;r++)
	    {for(c=0;c<=2;c++)
	    {sub[r][c]=A[r][c]-B[r][c];}}

	    for(r=0;r<=2;r++)
	      {for(c=0;c<=2;c++)
	      {printf("%d ",sub[r][c]);}
		 printf("\n");
		 }

	    getch();
	    }
