#include<stdio.h>
int main()
 {
     int side1,side2,side3;
     printf("\n Enter the 3 sides of the trinagle :");
     scanf("%d%d%d",&side1,&side2,&side3);
     

     (side1 == side2 && side1 == side3 && side2==side3) ? (printf("\n the tringle is equilateral"))
          : (side2 == side3 || side1 == side3 || side1 == side2) ? (printf("\nTriangle is Isoceles"))
          : (printf("\nTriangle is Scalene"));
     
     
     return 0;      
 
 }