//program to find out if the number imput is an Armstrong number or not
#include <stdio.h>
#include <conio.h>
void main()
{
     clrscr ();
    int n, n1, remainder, result = 0;
    printf("Enter a three digit integer: ");
    scanf("%d", &n);
    n = n1;
    while (n1 != 0)
    {
        remainder = n1%10;
        result += remainder*remainder*remainder;
        n1/= 10;
    }
    if(result == n)
        printf("%d is an Armstrong number.",n);
    else
        printf("%d is not an Armstrong number.",n);
    return 0;
} 
