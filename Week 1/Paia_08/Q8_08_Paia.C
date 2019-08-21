/* WAP to find Factorial of a number */

#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int num,fact=1;
	printf("\n Enter a number for finding the factorial : ");
	scanf("%d",&num);
	for(int i=1;i<=num;i++)
		fact=fact*i;
	printf("\n Factorial of %d : %d",num,fact);
	getch();
}