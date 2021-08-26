#include <stdio.h>
int main()
{
    int sub1, sub2, sub3, roll;
    float total, percent;
    char name[20];

    printf("Enter your Name :");
    scanf("%s", name);
    printf("Enter your Roll no :");
    scanf("%d", &roll);
    printf("Enter your Marks for subject 1 :");
    scanf("%d", &sub1);
    printf("Enter your Marks for subject 2 :");
    scanf("%d", &sub2);
    printf("Enter your Marks for subject 3 :");
    scanf("%d", &sub3);

    total = sub1 + sub2 + sub3;
    percent = (total / 300) * 100;

    
    printf("\nReport Card");
    printf("\nStudent Name : %s", name);
    printf("\nRoll no : %d", roll);
    printf("\nTotal marks scored : %f", total);
    printf("\nTotal Percentage :%f", percent);
    printf("\nRemarks :");
    if(percent>=75)
    printf("FIRST CLASS WITH DISTINCTION");
    if (percent>=60 && percent<75)
    printf("FIRST CLASS");
    if(percent<60)
    printf("SECOND CLASS");
    return 0;
}