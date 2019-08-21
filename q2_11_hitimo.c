/*Q2 Write a program to input a positive number and reverse the digits of the number.
Algo:
1. take input from the user
2. Divide the input by 10 and keep the remainder
3. use the code as example
    loop
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    end loop */
#include<stdio.h>
#include<conio.h>

int main()
{
        int n,temp;
        int rem=0, rev=0;
        printf("Enter a number to generate its reverse:\n");
        scanf("%d",&n);
        temp=n;
        while(n>0)
        {
            rem=n%10;
            rev=rev*10+rem;
            n=n/10;
        }
        printf("The reverse of %d is %d.",temp,rev);
        getch();
        return 0;
}