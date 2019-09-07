/*Q8. WAP to find Factorial  of a number [use for loop].*/
#include <stdio.h>
#include <conio.h>
void main(){
clrscr();
    int num; long factorial=1;
    printf("Enter a number to find out its factorial: ");
    scanf("%d", &num);
    if(num < 0)
      printf("no factorial for -ve integers");
    else{
      for(int i=1;i<=num;i++){
          factorial*=i;
      }
     printf("factorial of %d is %ld",num,factorial);
    }
getch();
}
