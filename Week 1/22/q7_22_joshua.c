/*WAP to add two numbers, using user defined function add.*/
#include <stdio.h>
#include <conio.h>
#define M 100
void main(){
  clrscr();
    int a,b,result;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    result=addTwoNumbers(a,b);
    printf("\nSum of two numbers: ",result);
  getch();
}
int addTwoNumbers(int a, int b){
  int sum;
  sum=a+b;
  return (sum);
  }
