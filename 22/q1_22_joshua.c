/*Q1. Write a program that determine if a number entered by the user at run time is an Armstrong number or not.*/

#include <stdio.h>
#include <conio.h>
#include <math.h>
void main(){
  clrscr();
  int num,rem,temp,sum=0;
  printf("Enter a number: ");
  scanf("%d", &num);
  temp=num;
  while(num>0){
    rem=num%10;
    sum+=pow(rem,3);
    num=num/10;
  }
  if (sum==temp)
  printf("%d is an Armstrong number",temp);
  else
  printf("%d is not an Armstrong number",temp);
  getch();
}
