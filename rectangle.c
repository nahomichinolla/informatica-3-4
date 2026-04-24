#include <stdio.h>
int main(void)
{
    int width;
    int length;
    printf("What is the height of the rectangle: ");
    printf("What is the width of the rectangle: ");
    scanf("%d", &width);
    scanf("%d", &length);
    printf("Area: %d \n", width*length);
    printf("Perimeter: %d \n", 2*(width+length));
}


