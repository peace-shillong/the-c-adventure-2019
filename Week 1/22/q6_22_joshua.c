/*WAP To calculate the average of n numbers.*/
#include <stdio.h>
#include <conio.h>
#define M 100
void main(){
  clrscr();
  int N,number[M],sum=0;
  printf("Enter the required number of elements: ");
  scanf("%d", &N);
  printf("\nEnter the %d elements\n");
  for(int i=0;i<N;i++){
    scanf("%d ",&number[i]);
    sum+=number[i];
  }
   printf("\nThe average of %d elements entered is= %d",N,(sum/N));
  getch();
}
