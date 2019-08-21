/* Q3 Write a program to generate Fibonacci series and print their sum and average
Algo.
1. A fibonacci series is the a series in which a term is the sum of the previous two terms.
2. Take an input from the user wich will be the range of the fionacci series.
3. add up all the the terms in the range to get the sum and divide the sum with the range to obtain the average
*/
#include<stdio.h>
#include<conio.h>

void main()
{
        int n, a, b, c=0, sum=1;
        float avg;
        printf("Enter the range fot the fibonacci series\n");
        scanf("%d",&n);
        a=0;
        b=1;
        printf("the Series will be:\n");
        printf("%d"",""%d"",",a,b);
        for(int i=2;i<=n;i++)
        {
            c=a+b;
            printf("%d"",",c);
            sum=sum+c;
            a=b;
            b=c;
        }
        avg=((float)sum/(float)n);
        printf("\nthe Sum is %d\n", sum);
        printf("The Average is %f\n", avg);
    getch();
}