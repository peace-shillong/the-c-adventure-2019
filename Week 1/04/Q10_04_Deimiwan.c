//Q10. WAP to check whether a number is prime or not.

#include<stdio.h>
void main()
{
	int n,i,c;
	c=0;
	printf("Enter a number to check for prime : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
			c=c+1;
	}
	if(c==2)
		printf("%d is prime ",n);
	else 
		printf("%d is not prime ",n);
}
