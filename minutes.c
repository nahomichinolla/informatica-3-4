# include <stdio.h>
int main(void){
    int runningTime;
    printf("Enter movie running time \n");
    scanf("%d", &runningTime);
    int startHour;
    int startMin;
    printf("Start Time: ");
    scanf("%d:%d", &startHour, &startMin);

    int hour = runningTime / 60;
    int minutes = runningTime % 60;

    int endHour = startHour + hour;
    int endMin = startMin + minutes;

    printf("The movie will last %dhr and %dmin\n", hour, minutes);
    printf("End Time: %d:%d\n", endHour, endMin);



}
