#include<stdio.h>
#include<conio.h>
void main()
{int a,b;
clrscr();
printf("Enter the 2 number= ");
scanf("%d%d",&a,&b);
// Relational operators
printf("Relational operators\n");
printf("%d=%d is %d \n",a,b,a==b);
printf("%d!=%d is %d\n",a,b,a!=b);
printf("%d>%d is %d\n",a,b,a>b);
printf("%d<%d is %d\n",a,b,a<b);
printf("%d>=%d is %d\n",a,b,a>=b);
printf("%d<=%d is %d\n\n",a,b,a<=b);

// logical operators
printf("Logical operators\n\n");
printf("(%d>%d)&&(%d<%d) is %d \n",a,b,a,b,(a>b)&&(a<b));
printf("(%d>%d)||(%d<%d) is %d \n",a,b,a,b,(a>b)||(a<b));
printf("!(%d>%d) is %d \n\n",a,b,!(a>b));

//     increment/decrement
printf("Increment \n");

a=a++;
printf("a++ is %d \n",a);

printf("Decrement \n");
b=b--;
printf("b-- is %d \n",b);




getch();
}