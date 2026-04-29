#include <stdio.h>
int main(void){
    char [20] item;
    printf("Name of your purchase item: ");
    scanf("%c", &item);

    float price;
    printf("Price of your item: ");
    scanf("%f", &price);

    int quantity;
    printf("Quantity bought ");
    scanf("%d", &quantity);

    printf("************\n");
    printf("Alsuper\n");
    printf("************\n");
    printf("Item: %c, \n",item);
    printf("Price: %f, \n",price);
    printf("Quantity: %d, \n",quantity);
    printf("************\n");
    printf("Thank you for your purchase!");
    printf("Item: "%s" \n");
}
