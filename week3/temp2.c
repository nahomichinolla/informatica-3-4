#include <stdio.h>

int main(void)
{
    int cel;
    printf("Enter Celcius: ");
    scanf("%d", &cel);
    //convert
    float fa1 = (cel*1.8)+32;
    printf("%d°C = %d°F \n",cel, fa1);
    // -40 Farenheit = -40 Celcius
    if(cel < 0){
      printf("❄️ Freezing weather \n");
    }
    else if(cel < 10) {
        printf("🧥 Chilly weather \n");
    }
    else if(cel < 30) {
        printf("🖼️ Normal weather \n");
    }
    else if(cel < 40) {
        printf("☀️ Hot weather \n");
    }
    else {
        printf("🔥 Very hot weather \n");
    }

}
