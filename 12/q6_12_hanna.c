//WAP to calculate the average of n numbers.[use for loop and arrays]
#include<stdio.h>
void main(){
	int n, num[20], i, total=0;
	float avg=0.0;
	printf("How many numbers do you want? ");
	scanf("%d",&n);
	printf("Please enter the numbers:\n");
	for(i=0; i<n; i++){
		printf("number[%d]: ",i );
		scanf("%d", &num[i]);
	}
	for(i=0; i<n; i++)
		total = total + num[i];
	avg = (float)total/n;
	printf("\nThe average is %.2f",avg);
}
