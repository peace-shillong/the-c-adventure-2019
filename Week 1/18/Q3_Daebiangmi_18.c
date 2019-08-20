//Write a program to generate Fibonacci series and print their sum and average. 
#include<stdio.h>
#include<conio.h>
void main()
{
    int a = 0, b = 1, c = 0 ;
    int i, n, s = 0 ;
    double aveg;

    
    printf("Enter the limit : ") ;
    scanf("%d", &n) ;
    printf("\nFibonacci series: \n\n") ;
    
    for(i = 1 ; i <= n ; i++)
    {
        c = a + b ;
        printf("%d \t", c) ;
        s = s + c ;
        a = b ;
        b = c ;
       
    }
    aveg = (double)s/n;
    printf("\nSum: %d", s) ;
    printf("\n\nThe Average : %.2lf", aveg);
    getch() ;
}
