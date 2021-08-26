#include<stdio.h>
int main()
{
     float maths,physics,chemistry,total;
     
     printf("Enter the mark of maths -");
     scanf("%f",&maths);
     
     printf("\nEnter the mark of physics -");
     scanf("%f",&physics);
     
     printf("\nEnter the marks of chemistry -");
     scanf("%f",&chemistry);

     total = maths + physics + chemistry;

     if((maths >= 65 && physics >=55 && chemistry >=50 && total >=190 ) || maths + physics + chemistry >=140)
       {
           printf("\n Congratualations you are eligible...");

       }
     else
       {
           printf("\nYou are not eligible!!");

       }
       return 0;
}

      