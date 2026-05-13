#include <stdio.h>
//prtotype
void add(void);
void mult(void);
void div(void);
void sub(void);

float n1;
float n2;

int main(void)
{
char ch;
    printf("Equation: \n");
    scanf("%f%c%f", &n1, &ch, &n2);
    if (ch == '+'){
        add();
    }
    else if (ch == '-'){
        sub();
    }
    else if (ch == '*'){
        mult();
    }
    else if (ch == '/'){
        div();
    }
 }

void add(void){
    //float n1;
    //float n2;
    // printf("Write your equation: \n");
    // scanf("%f+%f",&n1, &n2);
    float answer = n1+n2;
    printf("%.2f\n", answer);
 }
void sub(void){
    //float n1;
    //float n2;
    // printf("Write your equation: \n");
    // scanf("%f-%f",&n1, &n2);
    float answer = n1-n2;
    printf("%.2f\n", answer);
 }
void mult(void){
     //float n1;
    //float n2;
    // printf("Write your equation: \n");
    // scanf("%f*%f",&n1, &n2);
    float answer = n1*n2;
    printf("%.2f\n", answer);
}
void div(void){

     //float n1;
    //float n2;
    // printf("Write your equation: \n");
    // scanf("%f/%f",&n1, &n2);
    float answer = n1/n2;
    printf("%.2f\n", answer);
}
