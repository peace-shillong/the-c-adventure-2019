/* WAP to add two numbers, using user defined function add. */

#include<stdio.h>
#include<conio.h>
void sum(int a, int b);
void main()
{
	clrscr();
	int num1,num2;
	printf("\n Enter two numbers : ");
	scanf("%d %d",&num1,&num2);
	sum(num1,num2);
	getch();
}

void sum(int a, int b)
{
	printf("\n Sum of %d & %d : %d",a,b,(a+b));
}
	
