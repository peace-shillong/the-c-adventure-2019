#include<stdio.h>
int main()
{
   float int[100],sum=0.0,avg=0.0;
   printf("Enter the number of element");
   scanf("%d",&n);
   while(n>100)
   {
      for(i=0;i<n;i++)
      {
         printf("%d. Enter the number",i+1);
         scanf("%f",&n[i]);
         sum=sum+n[i];
      }
      avg=sum/n;
      printf("Average =%.2f",avg);
      return 0;
   }
}
