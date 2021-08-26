//Any year is input through the keyboard. Write a program to determine whether 
//the year is a leap year or not.
#include<stdio.h>
int main()
  {

    int year;
    printf("Enter the year-- ");
    scanf("%d",&year);

     if(year % 4 == 0)
     if(year % 100 == 0)
     if(year % 400 == 0)
       {
          printf("\nleap year");
       } 
      else
        {
            printf("\nnot a leap year");
        }
      else
       {
           printf("leap year");
       }
      else
       {
           printf("not a leap year");
       }
   return 0;
  }

