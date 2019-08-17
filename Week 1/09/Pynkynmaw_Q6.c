//WAP To calculate the average of n numbers.
#include <stdio.h>
#include <conio.h>
void main()
{
    int n, i;
    clrscr();
    float num[200], sum = 0.0, avg;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    while (n > 100 || n <= 0)
    {
        printf("Error! number range from 1 to 200.\n");
        printf("Please enter the valid number range: ");
        scanf("%d", &n);
    }
    for(i = 0; i < n; ++i)
    {
        printf(" %d Enter the number: ", i+1);
        scanf("%f", &num[i]);
        sum += num[i];s
    }
    avg = sum / n;
    printf(" Average   = %.2f", avg);
    return 0;
}
