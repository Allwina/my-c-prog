#include<stdio.h>
 int main()
  {
     float sellingprice,costprice,percent,c;
     printf("enter the costprice and sellingprice :"); 
     scanf("%f%f",&costprice,&sellingprice);
     c=sellingprice-costprice;
     percent = (sellingprice - costprice)/costprice * 100; 
     
     if(sellingprice > costprice) 
     { 
        printf("The profit is %f",c);
        printf("\nThe seller has made profit percentage of %f",percent);
     }
     else
     { 
         printf("\n The loss is %f",(-c));
         printf("\nThe seller has incurred loss %f",percent);
     } 
     return 0;
  }
