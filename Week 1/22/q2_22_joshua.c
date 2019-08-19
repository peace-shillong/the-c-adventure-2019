/*Q2. Write a program to input a positive number and reverse the digits of the number.*/

#include <stdio.h>
#include <conio.h>
//#include <math.h>
void main(){
  clrscr();
  int num,rem,temp,rev=0;
  printf("Enter a number: ");
  scanf("%d", &num);
  //temp=num;
  while(num>0){
    rem=num%10;
    //sum+=pow(rem,3);
    rev=rev*10+rem;
    num=num/10;
  }
  printf("Reverse is %d ",rev);
  getch();
}
