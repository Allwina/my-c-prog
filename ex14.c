#include<stdio.h>
int main()
 {
     int num;
     printf("\nEnter the values of positive or negative :");
     scanf("%d",&num);
     
     printf("\nThe absolute value of %d is %d",num,abs(num));
     return 0; 
 }