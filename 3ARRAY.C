// Binary search

#include<stdio.h>
#include<conio.h>

void main()
{int a[20],i,s,mid,lb=0,ub=19;
clrscr();

printf("\n Enter the 20 Number in accending order= ");
for(i=0;i<=19;i++)
{
  scanf("%d",&a[i]);
		    }

printf("Enter the number to be searched= ");
scanf("%d",&s);

		while(lb<=ub)
		{mid=(lb+ub)/2;
		if(s==a[mid])
		  {printf("\n Data found");
		    break;}

		     else if (s>a[mid])
		     {lb=mid+1;}

		       else if(s<a[mid])
		       {ub=mid-1;}
		       }

			   if(lb>ub)
			     printf("\n Data not found");
getch();
}









