#include <stdio.h>
int main(void){
    // Create variables for first snack (Quesadilla)
    float price1 = 129.99;
    int Quantity1 = 10 ;
    char letter1 = 'Q' ;
    // Create variables for second snack (Tacos)
    float price2 = 150.00;
    int Quantity2 = 5 ;
    char letter2 = 'T' ;
    // Create Vriables for third snack (Hamburger)
    float price3 = 160.00;
    int Quantity3 = 15 ;
    char letter3 = 'H' ;

    //Print title
    printf("Vending Machine Stock"); // Title
    printf("\n");
    printf("--------------------\n");

    //Print variables
    printf("Item name: Quesadilla\n");
    printf("Price: $%.2f \n", price1);
    printf("Quantity: %d \n", Quantity1);
    printf("Letter: %c \n", letter1);
    printf("\n");
    printf("Item name: Tacos\n");
    printf("Price: $%.2f \n", price2);
    printf("Quantity: %d \n", Quantity2);
    printf("Letter: %c \n", letter2);
    printf("\n");
    printf("Item name: Hamburger\n");
    printf("Price: $%.2f \n", price3);
    printf("Quantity: %d \n", Quantity3);
    printf("Letter: %c \n", letter3);
}
