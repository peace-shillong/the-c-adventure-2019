#include<stdio.h>
#include<conio.h>
void main()
{
    int f1 = 0, f2 = 1, f3 = 0, i, n, sum = 0 ;
    float avg;
    printf("Enter the limit:") ;
    scanf("%d", &n) ;
    printf("\nThe fibonacci series is :\n\n") ;
    for(i = 0 ; i <= n ; i++)
    {
        f3 = f1 + f2 ;
        printf("%d \t", f3) ;
        sum = sum + f3 ;
        f1 = f2 ;
        f2 = f3 ;
    }
    avg = (float)sum/n;
    printf("\n\nThe sum of the fibonacci series is : %d", sum) ;
    printf("\n\nthe avgerage of the fibonacci series is : %f", avg);

}
