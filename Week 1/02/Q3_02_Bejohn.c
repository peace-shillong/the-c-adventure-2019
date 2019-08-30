
/*Q3. Write a program to generate Fibonacci series and print their sum and average*/


#include <stdio.h> 

#include <conio.h> 

void main() 

{ 
 
int a = -1, b = 1, c = 0, i, n, sum = 0 ; 
 
float avg;
 
printf("Enter the range : ") ; 
 
scanf("%d", &n) ; 
 
printf("\nThe fibonacci series is : \n\n") ; 
 
for(i = 1 ; i <= n ; i++) 
 
{ 
  
c = a + b ; 
  
printf("%d \t", c) ; 
  
sum = sum + c ; 
  
a = b ; 
 
b = c ; 
 
} 
  
avg=(float)sum/n;
 
printf("\n\nThe sum of the fibonacci series is : %d", sum) ; 
 
printf("\n\nThe avg of the fibonacci series is : %f", avg) ; 
 
getch() ; 

}
