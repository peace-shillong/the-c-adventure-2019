#include<studio.h>
#include<conio.h>
int main()
{
    int num,temp,sum=0,rem;
    printf("Enter the positive number");
    scanf("%d",&num);
    temp=num;
    while(num>0)
    {
       rem=num/10;
       sum=sum*10+rem;
       num=num/10;
    }
    printf("The reverse number of %d is %d",temp,sum);
    return 0;
}
