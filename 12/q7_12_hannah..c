//WAP to add two numbers using user defined function add
#include<stdio.h>
int Add();
void main(){
	int a, b, total=0;
	printf("Enter the first number: ");
	scanf("%d",&a);
	printf("Enter the second number: ");
	scanf("%d",&b);
	total = Add(a,b);
	printf("\nSum of %d and %d: %d",a,b,total);
}
int Add(int x, int y){
	int c = x + y;
	return c;
}