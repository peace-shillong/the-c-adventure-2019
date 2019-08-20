//  Write a program to generate all the prime numbers till N. 
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n;

    printf("pls Enter the no. of terms \n");
    scanf("%d",&n);

    printf("Prime numbers:\n");
    for(i=2;i<=n;i++)
    {
        int c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }

       if(c==2)
        {
            printf("%d ",i);
        }
    }
    getch();
}
