//Q6.  Write a program To calculate the average of n numbers. 
//[use for loop and arrays]

#include<stdio.h>
int main()
{
	int a[50],n,i,s;
	float av;
	s=0;
	printf("Enter a number : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter the numbers :");
		scanf("\n %d",&a[i]);
		s=s+a[i];
	}
	avg=s/n;
	printf("Average = %.2f",av);
	return 0;
}
