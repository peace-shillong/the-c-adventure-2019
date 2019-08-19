/*Q5. Write a program to input the roll no., marks in 3 subjects and marks in one additional subject for N number of students. 
Compute the total marks, excess additional marks should be added to the total marks and determine the division. 
No division should be given if fail in 1 or more subjects.*/

#include <stdio.h>
#include <conio.h>
#define M 100
void main(){
  clrscr();
  int math[M],c[M],dld[M],ca[M],roll[M],N,total=0;
  printf("Enter the total number of students(<100): ");
  scanf("%d", N);
  for(int i=0;i<N;i++){
      printf("\nEnter the roll number of student %d: ",i+1);
      scanf("%d", &roll[i]);
      printf("\nEnter marks for math: ");
      scanf("%d", &math[i]);
      printf("\nEnter marks for C: ");
      scanf("%d", &c[i]);
      printf("\nEnter marks for dld: ");
      scanf("%d", &dld[i]);
      printf("\nEnter marks for computer architecture(additional): ");
      scanf("%d", &ca[i]);
  } 
  for(int i=0;i<N;i++){
      if (math[i]<30 || c[i]<30 || dld[i]<30 || ca[i]<30)
        printf("\nyou have not acquired any division since you have failed in 1 or more subjects");
      else{
        total+=math[i]+c[i]+dld[i]+ca[i];
          if (total >450)
            printf("\nPassed with 1st Division");
          else if(total>350 && total <= 450)
            printf("\nPassed with 2nd Division");
          else if(total>250 && total <= 350)
            printf("\nPassed with 3rd Division");
          else
            printf("\nPassed with consolidatory Division");
      }
        
  }
  getch();
}
