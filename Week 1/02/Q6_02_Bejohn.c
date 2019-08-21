/*Q6.  WAP To calculate the average of n numbers. [use for loop and arrays]*/

#include <stdio.h>
 
#include<conio.h>   
int main()
    
{
        
int n, i;
       
float num[50], 
sum = 0.0, average;
        
printf("Enter the numbers of elements: ");
        
scanf("%d", &n);
        
while (n > 50 || n <= 0)
        
{
           
printf("Invalid Number!! number should in range of (1 to 50).\n");
            
printf("Enter the number again: ");
            
scanf("%d", &n);
        
}
        
for(i = 0; i < n; ++i)
        
{
           
printf("%d. Enter number: ", i+1);
            
scanf("%f", &num[i]);
            
sum += num[i];
        
}
        
average = sum / n;
        
printf("Average = %.2f", average);

getch();        
return 0;
    
}
    
