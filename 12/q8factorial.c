//WAP to find factorial of a number[use for loop]
#include<stdio.h>
void main(){
    int num, fact=1, f, i;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(i=1; i<=num; i++)
        fact = fact * i;
    printf("The factorial of %d is %d.", num, fact);
}