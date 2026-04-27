#include <stdio.h>

int main(void)
{
    float Far;
    printf("What is the temperature in farenheit: \n");
    scanf("%f", &Far);
    float Cels = (Far-32)/1.8;
    printf("The temperature is %.2f F° = %2.f C° \n", Far, Cels); //The answer is -40 degrees
}



