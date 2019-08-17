// Write a program to generate all the prime numbers till N.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int n, c, i, j;
	printf("Enter the upper limit for prime number generation: ");
	scanf("%d", &n);
	if(n<=0)
	{
		printf("Enter a valid upper limit.");
		exit(0);
	}
	else
	{
	printf("\nThe prime numbers are given below:\n");
	for(i=1;i<=n;i++)
	{
		c=0;
		for(j=1; j<=i;j++)
		{
			if(i%j==0)
				c=c+1;
		}
		if(c==2)
		{
			printf("%d\t", i);
		}
	}
}
	return 0;
	getch();
}
