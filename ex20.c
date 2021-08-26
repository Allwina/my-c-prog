#include <stdio.h>
int main()
{
    float y1, y2, y3, x1, x2, x3, slope1, slope2;

    printf("Enter coordinates (x1,y1):\n");
    scanf("%f%f", &x1, &y1);
    printf("Enter coordinates (x2,y2):\n");
    scanf("%f%f", &x2, &y2);
    printf("Enter coordinates (x3,y3):\n");
    scanf("%f%f", &x3, &y3);

    slope1 = (y2 - y1) / (x2 - x1);
    slope2 = (y3 - y2) / (x3 - x2);

    if (slope1 == slope2)
    {
        printf("\nPoints (%.2f,%.2f), (%.2f,%.2f), (%.2f,%.2f) lie on the same line\n", x1, y1, x2, y2, x3, y3);
    }
    else
    {
        printf("\nPoints (%.2f,%.2f), (%.2f,%.2f), (%.2f,%.2f) do not lie on the same line\n", x1, y1, x2, y2, x3, y3);
    }
   return 0;
}
 