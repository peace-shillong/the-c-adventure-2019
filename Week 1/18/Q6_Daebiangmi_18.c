/*Write a program To calculate the average of n numbers. [use for loop and arrays]*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[50],n,i,s;
	double aveg;
	s=0;
	printf("Enter The Number Of Terms: ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter the numbers :");
		scanf("\n %d",&a[i]);
		s=s+a[i];
	}
	aveg=(double)s/n;
	printf("Average = %.2f",aveg);
	getch();
}
