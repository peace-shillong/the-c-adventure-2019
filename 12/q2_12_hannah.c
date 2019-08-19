//WAP to input a positive number and reverse the digits of the number
#include<stdio.h>
void main(){
	int num, rev=0, r, temp=0;
	do{
		printf("Enter a number: ");
		scanf("%d", &num);
		if(num<0)
			printf("----------Please enter a positive number!\n");
	}while(num<0);
	temp = num;
	while(num>0){
		r = num%10;
		rev = rev * 10 + r;
		num = num / 10;
	}
	printf("The reverse number of %d is %d.\n",temp,rev);
}