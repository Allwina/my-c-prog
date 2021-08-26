#include<stdio.h>
int main()
{
    int s=0;
    printf("the nos divisible by 9 are");
   for(int i=101;i<200;i++)

   {
       if(i%9==0){
       printf("%d",i );
       printf(" ");
       s=s+i;
       }

   }
   printf("the sum is %d",s);
   return 0;

}