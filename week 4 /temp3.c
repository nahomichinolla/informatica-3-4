#include <stdio.h>
//1. Prototype
void c_to_f(void);
void f_to_c(void);

int main(void) {
    int user_response;
    printf("Temperature Converter\n");
    printf("Select an option: \n");
    printf("1. Celsius to Fahrenheit \n");
    printf("2. Fahrenheit to celsius \n");
    scanf("%d", &user_response);

    if (user_response == 1){
        c_to_f();
    } else if (user_response == 2){
        f_to_c();
    } else {
        printf("Invalid option \n");
    }


}
//2. Definition
void c_to_f(void){
    int c;
    printf("What is the temperature in Celcius?: ");
    scanf("%d",&c);
    int f = (c * 1.8) + 32;
    printf("%d°C = %d°F\n", c, f);
}
void f_to_c(void){
    int f;
    printf("What is the temperature in Fahrenheit?: ");
    scanf("%d",&f);
    int c = (f - 32) / 1.8;
    printf("%d°F = %d°C\n", f, c);
}
