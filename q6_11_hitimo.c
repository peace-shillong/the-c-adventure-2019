/*Q6.  WAP To calculate the average of n numbers. [use for loop and arrays]
1. Take input from user i.e 
2. create an array with n
3. take inputs for array n
4. use for loop to generate the average.
*/
#include<stdio.h>
#include<conio.h>

int main()
{
    int n;
    printf("Enter the size of the array to input the numbers to find their average\n");
    scanf("%d",&n);
    int a[n];
    float avg, sum=0;
    printf("Enter the array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    avg=((float)sum/(float)n);
    printf("The average of the input numbers is %f",avg);
    getch();
    return 0;
}