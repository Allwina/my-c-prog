#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,j,k;
    printf("enter the half num of rows");
    scanf("%d",&n);
    int r=2*n;
    for(i=1;i<=n;i++)
    {
        for(j=0;j<=n-i;j++)
        {
            printf(" ");
        }
        for(k=0;k<=i;k=k++)
        {
            printf(" *");
        }printf("\n");
    }
    for(i=n-1;i>=0;i--)
    {
        for(j=0;j<=n-i;j++)
        {
            printf(" ");
        }
        for(k=0;k<=i;k++)
        {
            printf(" *");
        }printf("\n");
    }

return 0;

}
