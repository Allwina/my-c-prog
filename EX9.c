#include <stdio.h>
int main()
{
    int temperature;

    printf("Enter temperature in Celcius:\n");
    scanf("%d", &temperature);
    printf("Weather check :\n\n");
    if (temperature < 0)
    {
        printf("Freezing weather\n");
    }
    else if (temperature >= 40)
    {
        printf("Its Very Hot\n");
    }
    else
    {
        switch (temperature)  
        {
        case 0 ... 9:
            printf("Very Cold weather\n");
            break;
        case 10 ... 19:
            printf("Cold weather\n");
            break;
        case 20 ... 29:
            printf("Normal in Temp\n");
            break;
        case 30 ... 39:
            printf("Its Hot\n");
            break;
        default:
            printf("Incorrect input\n");
            break;
        }
    }
}

     
