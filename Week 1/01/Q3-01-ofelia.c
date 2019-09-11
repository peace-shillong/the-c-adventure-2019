#include<studio.h>
include<canio.h>
int main()
{
   int a,b,c,n,i,sum=0;
   float avg=0;
   printf("Enter the limit: ");
   scanf("%d",&n);
   printf("The fibonacci series is\n ");
   for(i=0;i<=n;i++)
   {
      c=a+b;
      printf("%d",&c);
      sum=sum+c;
      a=b;
      b=c;
   }
   avg=sum/n;
   printf("The sum of fibonacci series is %d",sum);
   printf("The average of fibonacci series is %d",avg);
   return 0;
}
