#include <stdio.h>
int main()
{
    int n,r,temp,sum=0;
    printf("please enter any number:");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=sum + r*r*r;
        n=n/10;
    }
    if(temp==sum)

        printf("it is an armstrong number:");

    else
            printf("It is not an armstrong number:");

}

