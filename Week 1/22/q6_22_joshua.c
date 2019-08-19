/*WAP To calculate the average of n numbers.*/
#include <stdio.h>
#include <conio.h>
void main(){
  clrscr();
  int N,number,sum=0;
  printf("Enter the required number of elements: ");
  scanf("%d", &N);
  printf("\nEnter the %d elements\n");
  for(int i=0;i<N;i++){
    scanf("%d ",&number);
    sum+=number;
  }
   printf("\nThe average of %d elements entered is= %d",N,(sum/N));
  getch();
}
