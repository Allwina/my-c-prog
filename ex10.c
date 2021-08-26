#include<stdio.h>
int main()
 {
    int Ram,Shyam,Ajay;
    
    printf("Enter the age of Ram :");
    scanf("%d",&Ram);

    printf("\nEnter the age of Shyam :");
    scanf("%d",&Shyam);

    printf("\nEnter the age of Ajay :");
    scanf("%d",&Ajay);

    if(Ram < Shyam && Ram < Ajay)
       {
           printf("\nthe youngest of 3 is ram :");
       }
    else if(Shyam < Ram && Shyam <Ajay)
        {
           printf("\nthe youngest of 3 is shyam :");

        } 
    else if(Ajay < Ram && Ajay < Shyam)
        {
            printf("\n the youngest of 3 is ajay :");

        }
    else 
        {
            printf("\nsame age");
        }          
      

 }