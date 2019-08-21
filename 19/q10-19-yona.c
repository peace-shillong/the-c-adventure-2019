#include <stdio.h>
int main()
{
    int n,i,sum;
    sum=0;
    printf("please enter no to check for prime no");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n % i==0);
        sum = sum+1;
    }
    if(sum ==0)
    {
        printf("It is a prime no");
    }
    else
    {
        printf("It is not a prime no");
    }
}
