// Q7. WAP to add two numbers, using user defined function add.

#include<stdio.h>
#include<conio.h>
int add(int a, int b);
int main()
{
	int x, y, sum;
	printf("Enter the first number: ");
	scanf("%d", &x);
	printf("\nEnter the second number: ");
	scanf("%d", &y);
	sum=add(x,y);
	printf("The sum of %d and %d is %d.", x, y, sum);
	return 0;
	getch();
}

int add(int x, int y)
{
	return x+y;
}
