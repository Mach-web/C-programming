#include <stdio.h>

int main(){
    int day;
    printf("Enter the day: \n");
    scanf("%d", &day);

    switch(day){
        case 1:
        printf("Day %i is a Monday. \n", day);
        break;
        case 2:
        printf("Day %i is a Tuesday. \n", day);
        break;
        case 3:
        printf("Day %i is a Wednesday. \n", day);
        break;
        case 4:
        printf("Day %d is a Thursday. \n", day);
        break;
        case 5:
        printf("Day %i is a Friday. \n", day);
        break;
        case 6:
        printf("Day %i is a Saturday. \n", day);
        break;
        case 7:
        printf("Day %i is a Sunday. \n", day);
        break;
        default:
        printf("The day is invalid. \n");
        break;
}
return 0;
}