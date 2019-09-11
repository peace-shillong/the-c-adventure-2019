#include<studio.h>
#include<math.h>
void main()
{
    int number,sum=0,rem=0,cube=0,temp;
    printf("enter a number");
    scanf("%d",&number);
    temp=number;
    while(number!=0)
    {
      rem=number%10;
      cube=pow(rem,3);
      sum=sum+cube;
      mum=number/10;
    }
    if(sum==temp)
      printf("It is an arm strong number")
    else
      printf("It is not an arm strong number");
    
}
