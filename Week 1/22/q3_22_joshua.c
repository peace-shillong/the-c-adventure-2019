/*Q3. Write a program to generate Fibonacci series and print their sum and average.*/

#include <stdio.h>
#include <conio.h>
void main(){
  clrscr();
  int n,term1,term2,sum=0,avg=0;
  printf("Enter the number of terms ");
  scanf("%d", &n);
  for(int i=0;i<n;i++){
    printf("%d, ", sum);
    sum=term1+term2;
    term1=term2;
    term2=sum;
  }
  avg=sum/n;
  printf("Required sum is %d", sum);
  printf("Average is %d", avg);
  getch();
}
