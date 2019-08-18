/*WAP that determine if a number entered by the user at run time is an Armstrong number or not*/
#include<stdio.h>
void main(){
	int num, n, sum=0, temp=0;
	printf("Enter a number: ");
	scanf("%d", &num);
	temp = num;
	while(num>0){
		n = num % 10;
		sum = sum + n*n*n;
		num = num/10;
	}
	if(sum==temp)
		printf("%d is an Armstrong number.\n", temp);
	else
		printf("%d is not an Armstrong number.\n", temp);
}