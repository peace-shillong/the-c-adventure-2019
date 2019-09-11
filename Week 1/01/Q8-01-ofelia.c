#include<stdii.h>
int main()
{
   int n,fact,i;
   printf("Enter an Integer:");
   scanf("%d",&n);
   {
      for(i=0;i<=n;i++)
      {
         fact=fact*i;
      }
      printf("factorial of %d is %d",n,fact);
   }
}
