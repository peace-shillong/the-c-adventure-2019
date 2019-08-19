//Q10. Write a program to check whether a number is prime or not.

#include<stdio.h>
void main()
{
	int n,i,ch;
	ch=0;
	printf("Enter a number to check for prime : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
			ch=ch+1;
	}
	if(ch==2)
		printf("%d is prime ",n);
	else 
		printf("%d is not prime ",n);
}
