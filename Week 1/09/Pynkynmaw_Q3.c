/* Write a program to generate Fibonacci series and print their sum and average. */
#include<stdio.h>
#include<conio.h>
void main()
{
    int a = 0, b = 1, c = 0, i, n, sum = 0 ;
    double avg;

    //clrscr();
    printf("Enter the limit : ") ;
    scanf("%d", &n) ;
    printf("\nThe Fibonacci series is : \n\n") ;
    
    for(i = 1 ; i <= n ; i++)
    {
        c = a + b ;
        printf("%d \t", c) ;
        sum = sum + c ;
        a = b ;
        b = c ;
       
    }
   avg = (double)sum/n;
    printf("\n\nThe sum of the fibonacci series is : %d", sum) ;
    printf("\n\nThe Average of the Series is: %.2lf", avg);
    getch() ;
}
