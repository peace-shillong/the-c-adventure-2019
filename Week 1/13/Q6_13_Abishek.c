// Q6.  WAP To calculate the average of n numbers. [use for loop and arrays]

#include<stdio.h>
#include<conio.h>
int main()
{
	int a[100];
	int n, i, sum;
	sum=0;
	float avg;
	printf("Enter the number of terms: ");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter the term A[%d]:", i);
		scanf("%d", &a[i]);
		sum=sum+a[i];
	}
	avg=(float)sum/n;
	printf("The average of the given numbers is: %.2f", avg);
	return 0;
	getch();
}
