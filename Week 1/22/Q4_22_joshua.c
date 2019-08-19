/*Q4. Write a program to generate all the prime numbers till N.*/

#include<iostream.h>
#include<conio.h>
#include<stdio.h>

void main(){
  clrscr();
  int n,flag=2;
  printf("Enter the number of terms ");
  scanf("%d", &n);
  while (n>0){
    for(int i=2;i<=flag;i++){
      if (flag%i == 0){
        break;
      }
      if (flag == i){
        printf("%d, ", flag);
        n--
      }
     flag++;
    }
 }   
  getch();
}
