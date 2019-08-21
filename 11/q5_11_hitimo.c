/* Q5. Write a program to input the roll no., marks in 3 subjects and marks in one additional subject for N number of students.
Compute the total marks, excess additional marks should be added to the total marks and determine the division. 
No division should be given if fail in 1 or more subjects.
1. Take the input for the number of students in the class;
2. make a 2d array to enter the marks 
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int n, a[10][5],mark=0;
    printf("Enter the number of students:\n");
    scanf("%d",&n);
    printf("Enter the data:\n");
    for(int i=0;i<n;i++)
    {
        printf("Roll No:");
        scanf("%d",&a[i][1]);
        printf("Enter marks for 3 subjects and additonal subject:\n");
        for(int j=1;j<5;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int k=0;k<n;k++)
    {
        printf("Roll no:",a[k][1]);
        for(int l=0;l<5;l++)
        {
            if(a[k][l]<33)
            {
                 printf("Fail");
                 break;
            }   
            mark=mark+a[k][l];
        }
    }
    getch();
    return 0;
}