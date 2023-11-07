#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("enter the value of a");
	scanf("%d",&a);
	printf("enter the value of b");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("the value of a is after swapping %d\n",a);
	printf("the value of b is after swapping %d",b);
	getch();
}