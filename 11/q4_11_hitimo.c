/*Q4 Write a program to generate all the prime numbers till N
1. take an input to get the range
2. make a loop and check if the number is prime or not
    if prime
        PRINT
    else
        NEXT NUMBER
*/
#include<stdio.h>
#include<conio.h>

int main()
{
    int n, i, j;
    int count=0;
    printf("Enter the range to print Prime numbers:\n");
    scanf("%d",&n);
    printf("2,");
    for(i=3;i<=n;i++)
    {
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==1)
        {
            printf("%d,",i);
        }
        count=0;
    }
    getch();
    return 0;
}