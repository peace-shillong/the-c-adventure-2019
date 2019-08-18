//Q8. WAP to find Factorial  of a number [use for loop].

#include<stdio.h>
void main()
{
	int n,i;
	long fact;
	fact=1;
	printf("Enter a number : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact*=i;
	}
		printf("\n Factorial = %d",fact);
}
