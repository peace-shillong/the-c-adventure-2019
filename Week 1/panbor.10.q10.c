//program to check if a number is a prime or not
Algorithm
Step1: Start
Step2: Enter variables num,i
Step3: Read variable num
Step4: while i <=num-1
        if (num%i==0
          Display not a prime number
          Break
        Else
          if(i==0)
         Display Prime number
Step5: Stop
 #include <stdio.h>
 #include <conio.h>
 void main ()
{ 
    Clrscr ();
   int num,i;
   printf ("enter any number::");
   scanf ("%d",&num);
   i=2;
   while(i <=num-1)
    {
     if(num%i==0)
      {
        printf ("not a prime number");
         break;
      }

        i++;

     }
    else if (i==0)
      {
        printf (" it is a prime number");
      }
       Getch ();
}
