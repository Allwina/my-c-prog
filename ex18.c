#include<stdio.h>
int main()
 {
    char grade;
    printf("\nEnter the grade from E,V,G,A,F :");
    scanf("%c",&grade);

    switch (grade)
    {
    case 'E': printf("\nExcellent");
              break;
    
    case 'V': printf("\nVery Good");
              break;

    case 'G': printf("\nGood");
              break;

    case 'A': printf("\nAverage");
              break;

    case 'F': printf("\nFail");
              break;

    default:  printf("\nInvalid operation!!");
              break;
    }
    return 0;
 
 }