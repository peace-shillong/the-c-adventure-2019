// Q8. WAP to find Factorial  of a number [use for loop].

#include<stdio.h>
#include<conio.h>
int main()
{
	int n, i, fact;
	fact=1;
	printf("Enter the number whose factorial is to be calculated: ");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("The factorial of %d is %d.", n, fact);
	getch();
	return 0;
}
