#include<stdio.h>
int main()
 {
      int age;
      printf("enter the age -");
      scanf("%d",&age);

      if(age>=18)
        printf("congratulation! Your are eligible for casting your vote");
      else
        printf("you are not eligible to cast your vote");

        return 0;  
 }