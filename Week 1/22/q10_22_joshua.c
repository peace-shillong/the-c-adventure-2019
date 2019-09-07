/*Q10. WAP to check whether a number is prime or not.*/

#include <stdio.h>
#include <conio.h>
void main(){
clrscr();
int num,flag=0;
printf("Enter a number: ");
scanf("%d", &num);
for(int i=1; i<=num;i++){
    if(num%i==0){
        flag++;
    }
}
if(flag==2)
  printf("%d is a prime number", num);
else
  printf("%d is not a prime number", num);
getch();
}
