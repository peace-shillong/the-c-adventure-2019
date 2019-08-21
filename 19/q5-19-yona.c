#include <stdio.h>
void main()
{
    int rollno[10],n,i;
    float sub1[10],sub2[10],sub3[10],optional[10],avg;
    printf("please enter the number of students\t");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf("enter the roll no:\t");
        scanf("%d",&rollno[i]);
        printf("enter the marks for 1st paper:\t");
        scanf("%f",&sub1[i]);
        printf("enter the marks for 2nd paper:\t");
        scanf("%f",&sub2[i]);
        printf("enter the marks for 3rd paper:\t");
        scanf("%f",&sub3[i]);
        printf("enter the marks for additional paper:\t");
        scanf("%f",&optional[i]);

    }
    for(i=0;i<=n;i++)
    {
            avg= sub1[i] + sub2[i] + sub3[i]+optional[i];
            avg = (float)avg/4;
            printf("\tRollNo : %d\t\n",rollno[i]);
            printf("\tavg : %f\t\n",avg);

            if(avg >=60)
                printf("\tFirst devision:\t\n");
            else if(avg >=50 && avg <=60)
                printf("\tsecond devision:\t\n");
            else if(avg >=30 && avg <=50)
                printf("\tthird devision:\t\n");
            else
                printf("\tFail\t\n");
    }

}


