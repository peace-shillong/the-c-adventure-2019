//WAP to check whether a number is prime or not
#include<stdio.h>
void main(){
	int num, sum=0;
	printf("Enter a number:");
	scanf("%d",&num);
	for(int i=1; i<=num; i++){
		if(num%i==0)
            sum = sum + 1;				
	}
    if(sum==2)
        printf("\nIt is a prime number.");
    else
        printf("\nIt is not a prime number.");
}